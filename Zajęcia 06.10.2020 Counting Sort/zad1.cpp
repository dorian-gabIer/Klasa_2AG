#include <bits/stdc++.h>
using namespace std;
int sumacyfr(int n)
{
    int suma = 0;
    while(n != 0)
    {
        suma += n%10;
        n /= 10;
    }
    return suma;
}
int main()
{
    int a, c = 0;
    while(cin >> a)
    {
        if(a == 0) break;
        if(sumacyfr(a) % 4 == 0) c++;
    }
    cout << c;
    return 0;
}
