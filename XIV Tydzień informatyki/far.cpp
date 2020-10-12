#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, p, q, r;
    cin >> n;
    int tab[10005] = { 0 };
    do
    {
        cin >> p >> q >> r;
        for (int i = p-1; i < q; i++) if (tab[i] < r) tab[i] = r;
    } 
    while (p && q && r);
    for (int i = 0; i < n; i++)
    {
        sum += tab[i];
    }
    cout << sum;
    return 0;
}
