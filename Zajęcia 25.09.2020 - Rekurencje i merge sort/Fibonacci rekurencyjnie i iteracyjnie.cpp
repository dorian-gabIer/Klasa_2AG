#include <bits/stdc++.h>
using namespace std;
int fib(int n)
{
    int a = 0, b = 1;
    for(int i = 1; i < n; i++) // numerowanie wyrazow ciagu od F0 = 0
    {
        b += a;
        a = b-a;
    }
    return b;
}
int fibrek(int n)
{
    if(n == 0) return 0;
    else if(n < 3) return 1;
    else return (fib(n-1) + fib(n-2));
}
int main()
{
    // przyklad: F6 = 8
    cout << fib(6) << " " << fibrek(6);
    return 0;
}