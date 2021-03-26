#include <bits/stdc++.h>
using namespace std;
int DET(int x1, int y1, int x2, int y2, int x3, int y3)
{
    // ABC
    return ((x1 * y2) + (x2 * y3) + (x3 * y1) - (x2 * y1) - (x3 * y2) - (x1 * y3));
}
bool in(int x1, int y1, int x2, int y2, int x3, int y3)
{
    if((min(x1, x2) <= x3) && (max(x1, x2) >= x3) && (min(y1, y2) <= y3) && (max(y1, y2) >= y3)) return true;
    return false;
}
int przecinanie(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
    int abc = DET(x1, y1, x2, y2, x3, y3);
    int abd = DET(x1, y1, x2, y2, x4, y4);
    int cda = DET(x3, y3, x4, y4, x1, y1);
    int cdb = DET(x3, y3, x4, y4, x2, y2);
    char sabc = '-', sabd = '-', scda = '-', scdb = '-';
    if(abc >= 0) sabc = '+';
    if(abd >= 0) sabd = '+';
    if(cda >= 0) scda = '+';
    if(cdb >= 0) scdb = '+';
    if(abc != 0 && abd != 0 && cda != 0 && cdb != 0) if(sabc != sabd && scda != scdb) return 2;
    else
    {
        if(abc == 0 && abd == 0 && cda == 0 && cdb == 0) return 2;
        else
        {
            if(abc == 0) if(in(x1, y1, x2, y2, x3, y3)) return 1;
            else if(abd == 0) if(in(x1, y1, x2, y2, x4, y4)) return 1;
            else if(cda == 0) if(in(x3, y3, x4, y4, x1, y1)) return 1;
            else if(cdb == 0) if(in(x3, y3, x4, y4, x2, y2)) return 1;
        }
    }
    return 0;
}
int main()
{
    int A[500][2];
    int B[500][2];
    int p[500];
    int co = 0;
    for(int i = 0; i < 500; i++) p[i] = 0;
    int a = 1, b = 1, c = 1, d = 1;
    while(cin >> a >> b >> c >> d && !(a == 0 && b == 0 && c == 0 && d == 0)) A[co][0] = a, A[co][1] = b, B[co][0] = c, B[co][1] = d, co++;
    for(int i = 0; i < co; i++)
    {
        for(int j = i + 1; j < co; j++)
        {
            int pp = przecinanie(A[i][0], A[i][1], B[i][0], B[i][1], A[j][0], A[j][1], B[j][0], B[j][1]);
            if(pp == 1 || pp == 2) p[i] = 1, p[j] = 1;
        }
    }
    bool is = false;
    for(int i = 0; i < co; i++)
    {
        if(p[i] == 0)
        { 
            cout << A[i][0] << ' ' << A[i][1] << ' ' << B[i][0] << ' ' << B[i][1] << endl;
            is = true;
        }
    }
    if(!is) cout << '0';
    return 0;
}
