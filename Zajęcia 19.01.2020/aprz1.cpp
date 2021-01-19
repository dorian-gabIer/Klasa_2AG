#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c = 0, l, p, r;
    cin >> n;
    l = 0, p = (n-1)/2, r = n-1;
    int numbs[n];
    for(int i = 0; i < n; i++) cin >> numbs[i];
    while(l < r && c < 3)
    {
        while(numbs[l] < p) l++;
        while(numbs[r] > p) r--;
        if(l <= r)
        {
            cout << numbs[l] << " " << numbs[r] << endl;
            swap(numbs[l], numbs[r]);
            c++;
        }
    }
    return 0;
}
