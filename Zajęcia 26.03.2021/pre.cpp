#include <iostream>
#include <math.h>
using namespace std;
int DET(int x1, int y1, int x2, int y2, int x3, int y3)
{
    // ABC
    return ((x1 * y2) + (x2 * y3) + (x3 * y1) - (x2 * y1) - (x3 * y2) - (x1 * y3));
}
bool in(int x1, int y1, int x2, int y2, int x3, int y3)
{
    if ((min(x1, x2) <= x3) && (max(x1, x2) >= x3) && (min(y1, y2) <= y3) && (max(y1, y2) >= y3)) return true;
    return false;
}
int przecinanie(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
    int abc = DET(x1, y1, x2, y2, x3, y3);
    int abd = DET(x1, y1, x2, y2, x4, y4);
    int cda = DET(x3, y3, x4, y4, x1, y1);
    int cdb = DET(x3, y3, x4, y4, x2, y2);
    char sabc = '-', sabd = '-', scda = '-', scdb = '-';
    if (abc >= 0) sabc = '+';
    if (abd >= 0) sabd = '+';
    if (cda >= 0) scda = '+';
    if (cdb >= 0) scdb = '+';
    if (abc != 0 && abd != 0 && cda != 0 && cdb != 0)
    {
        if (sabc != sabd && scda != scdb) return 2;
    }
    else
    {
        if (abc == 0 && abd == 0 && cda == 0 && cdb == 0) return 2;
        else
        {
            if (abc == 0) { if (in(x1, y1, x2, y2, x3, y3)) return 1; }
            else if (abd == 0) { if (in(x1, y1, x2, y2, x4, y4)) return 1; }
            else if (cda == 0) { if (in(x3, y3, x4, y4, x1, y1)) return 1; }
            else if (cdb == 0) { if (in(x3, y3, x4, y4, x2, y2)) return 1; }
        }
    }
    return 0;
}
int dl(int x1, int y1, int x2, int y2)
{
    return (((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
}
struct p
{
    int x1, y1, x2, y2, dl;
    bool wyk = false;
};
int main()
{
    long long i = 0, max, x1, x2, y1, y2, maxpos, kto[2] = {};
    p tab[1000];
    while (1)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        if (!x1 && !y1 && !x2 && !y2) break;
        tab[i].x1 = x1, tab[i].y1 = y1, tab[i].x2 = x2, tab[i].y2 = y2, tab[i].dl = dl(x1, y1, x2, y2), maxpos = i;
        for (int j = 0; j < i; j++) if (!tab[j].wyk && przecinanie(tab[j].x1, tab[j].y1, tab[j].x2, tab[j].y2, tab[i].x1, tab[i].y1, tab[i].x2, tab[i].y2)) if (maxpos == i or tab[j].dl > tab[maxpos].dl) maxpos = j;
        if (maxpos != i) kto[i % 2] += tab[maxpos].dl + tab[i].dl, tab[i].wyk = 1, tab[maxpos].wyk = 1;
        i++;
    }
    cout << abs(kto[0] - kto[1]) << endl;
    return 0;
}
