#include <bits/stdc++.h>
using namespace std;
int DET(int x1, int y1, int x2, int y2, int x3, int y3)
{
    // ABC
    return ((x1 * y2) + (x2 * y3) + (x3 * y1) - (x2 * y1) - (x3 * y2) - (x1 * y3));
}
int main()
{
    int x1, y1, x2, y2, x3, y3;
    for(int i = 0; i < 10; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        int det = DET(x1, y1, x2, y2, x3, y3);
        if(det > 0) cout << "+1" << endl;
        else if(det == 0) cout << "0" << endl;
        else cout << "-1" << endl;
    }
    return 0;
}
