#include <bits/stdc++.h>
using namespace std;
bool prime(int a) 
{
    if(a < 2) return false;
    if(a == 2) return true;
    for(int i = 2; i*i <= a; i++) if(a%i == 0) return false;
    return true;
}
int main()
{
    int a, b, c = 0;
    for(int i = 0; i < 1000; i++)
    {
        cin >> a >> b;
        if (prime(a) && prime(b)) c++;
    }
    cout << c;
    return 0;
}
