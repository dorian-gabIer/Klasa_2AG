#include <bits/stdc++.h>
using namespace std;
int NWD(int a, int b)
{
    if(b == 0) return a;
    else return NWD(b, a%b);
}
int punktykratowe(int x1, int y1, int x2, int y2, int x3, int y3)
{
    int nwd1 = NWD(abs(x1 - x2), abs(y1 - y2));
    int  nwd2 = NWD(abs(x1 - x3), abs(y1 - y3));
    int nwd3 = NWD(abs(x2 - x3), abs(y2 - y3));
    int B = nwd1 + nwd2 + nwd3;
    int P = abs(x1*y2 + x2*y3 + x3*y1 - x3*y2 - x1*y3 - x2*y1);
    return (P-B+2)/2;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, x1, x2, x3, y1, y2, y3;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        cout << punktykratowe(x1, y1, x2, y2, x3, y3) << endl;
    }
    return 0;
}
