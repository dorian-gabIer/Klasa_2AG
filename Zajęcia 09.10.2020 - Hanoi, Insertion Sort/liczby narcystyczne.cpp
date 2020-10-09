#include <bits/stdc++.h>
using namespace std;
bool narc(int n)
{
    if(n == 0) return true;
    int sum = 0, pot = 0, real = n, tmp = n, temp;
    while(tmp != 0)
    {
        tmp /= 10;
        pot++;
    }
    while(n != 0)
    {
        temp = n % 10;
        n /= 10;
        sum += pow(temp, pot);
    }
    if(sum == real) return true;
    else return false;
}
int main()
{
    int narcs[1000], c = 0;
    for(int i = 1; i <= 1000; i++)
    {
        if(narc(i))
        {
            narcs[c] = i;
            c++;
        }
    }
    for(int i = 0; i < c; i++)
    {
        cout << narcs[i] << endl;
    }
}
