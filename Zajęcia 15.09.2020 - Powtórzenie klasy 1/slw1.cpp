#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int c = 0;
    while(cin >> a)
    {
        if(a.back() == 'A') c++;
    }
    cout << c;
    return 0;
}
