#include <bits/stdc++.h>
using namespace std;
int Drek(int n)
{
    if(n == 0 || n == 1) return 1;
    else if(n%2 == 0) return Drek(int(n/4)) + 1;
    else return Drek((3*n) + 1) + 1;
}
int Dite(int n)
{
    if(n == 0 || n == 1) return 1;
    int sum  = 1; // sum = 1, at the end when n == 0 || n == 1, then sum + 1, D(n) for {0; 1} is 1
    while(n != 0 && n != 1)
    {
        if(n%2 == 0) n /= 4;
        else n = 3*n + 1;
        sum++;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    cout << Drek(n) << " " << Dite(n);
}
