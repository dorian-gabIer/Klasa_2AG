#include <iostream>
using namespace std;
int main()
{
    long long n, tab[10001], max;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> tab[i];
    }
    cout << tab[0] << " ";
    max = tab[0];
    for(int i = 1; i < n; i++)
    {
        if(tab[i] > max)
        {
            cout << tab[i] << " ";
            max = tab[i];
        }
    }
    return 0;
}