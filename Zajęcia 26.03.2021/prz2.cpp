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
int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    for(int i = 0; i < 10; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        bool y = false;
        int abc = DET(x1, y1, x2, y2, x3, y3);
        int abd = DET(x1, y1, x2, y2, x4, y4);
        int cda = DET(x3, y3, x4, y4, x1, y1);
        int cdb = DET(x3, y3, x4, y4, x2, y2);
        char sabc = '-', sabd = '-', scda = '-', scdb = '-';
        if(abc >= 0) sabc = '+';
        if(abd >= 0) sabd = '+';
        if(cda >= 0) scda = '+';
        if(cdb >= 0) scdb = '+';

        if(abc != 0 && abd != 0 && cda != 0 && cdb != 0) 
        {
            if(sabc != sabd && scda != scdb)
            {
                cout << '2' << endl;
                y = true;
            }
        }
        else
        {
            if(abc == 0 && abd == 0 && cda == 0 && cdb == 0)
            {
                cout << '2' << endl;
                y = true; 
            }
            else
            {
                if(abc == 0)
                {
                    if(in(x1, y1, x2, y2, x3, y3))
                    {
                        cout << '1' << endl;
                        y = true;
                    }
                }
                else if(abd == 0)
                {
                    if(in(x1, y1, x2, y2, x4, y4))
                    {
                        cout << '1' << endl;
                        y = true;
                    }
                }
                else if(cda == 0)
                {
                    if(in(x3, y3, x4, y4, x1, y1))
                    {
                        cout << '1' << endl;
                        y = true;
                    }
                }
                else if(cdb == 0)
                {
                    if(in(x3, y3, x4, y4, x2, y2))
                    {
                        cout << '1' << endl;
                        y = true;
                    }
                }
            }
        }
        if(!y) cout << '0' << endl;
    }
    return 0;
}
