#include <bits/stdc++.h>
using namespace std;
bool prime(int a) 
{
    for(int i = 2; i*i <= a; i++) if(a%i == 0) return false;
    return true;
} 
int main()
{
    int a, c = 0;
    while(cin >> a)
    {
        if(prime(a)) c++;
    }
    cout << c;
    return 0;
}
