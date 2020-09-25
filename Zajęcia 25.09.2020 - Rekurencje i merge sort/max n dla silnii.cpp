#include <bits/stdc++.h>
using namespace std;
long long silniarek(int n)
{
    if(n <= 1) return 1;
    else return (silniarek(n-1) * n);
}
long long maxsilniarek()
{
    int c = 2;
    while(silniarek(c) < silniarek(c+1)) c++;
    return c;
}
int main ()
{
    cout << maxsilniarek();
    return 0;
}