#include <bits/stdc++.h>
using namespace std;
int det(int x1, int y1, int x2, int y2, int x3, int y3)
{
    int a = (x1*y2) + (x2*y3) + (x3*y1) - (x2*y1) - (x3*y2) - (x1*y3);
    if(a > 0) return 1;
    else if(a == 0) return 0;
    else if(a < 0) return -1;
}
bool wewnatrz(int x1, int y1, int x2, int y2, int x3, int y3)
{
    if(min(x1, x2) <= x3 && x3 <= max(x1, x2) && min(y1, y2) <= y3 && y3 <= max(y1, y2)) return true;
    return false;
}
bool przecinanie(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
    int A = det(x1, y1, x2, y2, x3, y3);
    int B = det(x1, y1, x2, y2, x4, y4);
    int C = det(x3, y3, x4, y4, x1, y1);
    int D = det(x3, y3, x4, y4, x2, y2);
    if(A != 0 && B != 0 && C != 0 && D != 0)
    {
        if(A != B && C != D) return true;
        else return false;
    }
    else
    {
        if(A==0 && wewnatrz(x1, y1, x2, y2, x3, y3) == true) return true;
        if(B==0 && wewnatrz(x1, y1, x2, y2, x4, y4) == true) return true;
        if(C==0 && wewnatrz(x3, y3, x4, y4, x1, y1) == true) return true;
        if(D==0 && wewnatrz(x3, y3, x4, y4, x2, y2) == true) return true;
    }
}
int main()
{
    int xA1, yA1, xA2, yA2, xB1, yB1, xB2, yB2, xC2, yC2, xD2, yD2;
    for(int i = 0; i < 5; i++)
    {
        cin >> xA1 >> yA1 >> xA2 >> yA2;
        cin >> xB1 >> yB1 >> xB2 >> yB2 >> xC2 >> yC2 >> xD2 >> yD2;
        int b = det(xA1, yA1, xA2, yA2, xB1, yB1);
        int d = det(xA1, yA1, xA2, yA2, xD2, yD2);
        int c1 = det(xA1, yA1, xA2, yA2, xB2, yB2);
        int c2 = det(xA1, yA1, xA2, yA2, xC2, yC2);
        if(przecinanie(xA1, yA1, xA2, yA2, xB1, yB1, xB2, yB2) == false || przecinanie(xA1, yA1, xA2, yA2, xC2, yC2, xD2, yD2) == false) cout << '0';
        else
        {
            if(przecinanie(xA1, yA1, xA2, yA2, xB2, yB2, xC2, yC2)) cout << '2';
            else cout << '1';
        }
    }
    return 0;
}
