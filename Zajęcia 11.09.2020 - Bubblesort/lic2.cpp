#include <bits/stdc++.h>
using namespace std;
int NWD(int a, int b)
{
    if(b == 0) return a;
    else return NWD(b, a%b);
}
int main()
{
    int a, b, c = 0;
    while(cin >> a >> b) if(NWD(a, b) == 1) c++;
    cout << c;
    return 0;
}
