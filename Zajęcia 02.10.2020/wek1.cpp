#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c= 0;
    while(cin >> a >> b)
    {
        if(a == 0 || b == 0) 
        {
            cout << a << " " << b << endl;
            c++;
        }
    }
    cout << c;
    return 0;
}
