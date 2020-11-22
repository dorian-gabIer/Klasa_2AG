#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    if(n == 0 or n == 1) return false;
    if(n == 2) return true;
    for(int i = 2; i*i<=n; i++)
    {
	    if(n % i==0) return false;
    }
    return true;
}
int sumacyfr(int n)
{
    int sum = 0;
    while(n != 0)
    {  
	    sum += n % 10;
	    n /= 10;
    }
    return sum;
}
int main()
{
    int n;
    while(cin >> n)
    {
        if(prime(sumacyfr(n))) cout << n << endl;
    }
    return 0;
}
