#include <bits/stdc++.h>
using namespace std;
struct odc
{
    long long x1;
    long long y1;
    long long x2;
    long long y2;
};
bool side(int x1, int y1, int x2, int y2, int x3, int y3)
{
    return ((y3 - y1) * (x2 - x1) > (y2 - y1) * (x3 - x1));
}
bool intersect(odc p1, odc p2)
{
    return (side(p1.x1, p1.y1, p2.x1, p2.y1, p2.x2, p2.y2) != side(p1.x2, p1.y2, p2.x1, p2.y1, p2.x2, p2.y2) && side(p1.x1, p1.y1, p1.x2, p1.y2, p2.x1, p2.y1) != side(p1.x1, p1.y1, p1.x2, p1.y2, p2.x2, p2.y2));
}
int main()
{
    int ilo, a, b, pa, pb, firsta, firstb, maxa = -INT_MAX, och, out = 0, count = 0;
    cin >> ilo;
    odc tab[ilo];
    cin >> firsta >> firstb;
    maxa = max(maxa, firsta + 1), pa = firsta, pb = firstb;
    for(int i = 1; i < ilo; i++)
    {
        cin >> a >> b;
        tab[i].x1 = pa, tab[i].y1 = pb, tab[i].x2 = a, tab[i].y2 = b, maxa = max(maxa, a), pa = a, pb = b;
    }
    tab[0].x1 = a, tab[0].y1 = b, tab[0].x2 = firsta, tab[0].y2 = firstb;
    odc p;
    cin >> a >> b;
    p.x1 = a, p.y1 = b, p.x2 = maxa + 1, p.y2 = b;
    for(int i = 0; i < ilo; i++) count += intersect(tab[i], p);
    if(!(count % 2)) cout << "NIE";
    else cout << "TAK";
    return 0;
}
