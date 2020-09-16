#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    int c = 0;
    while(cin >> a >> b)
    {
        if(b.find(a) != string::npos) c++;
    }
    cout << c;
    return 0;
}
