#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    int c = 0;
    for(int i = 0; i < 1000; i++)
    {
        cin >> a >> b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        a.erase(unique(a.begin(), a.end() ), a.end());
        b.erase(unique(b.begin(), b.end() ), b.end());
        if (a == b) c++;
    }
    cout << c;
    return 0;
}
