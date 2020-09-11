#include <bits/stdc++.h>
using namespace std;
int sumacyfr(int a) 
{ 
    int s;
    for (s = 0; a > 0; s += a % 10, a /= 10);
    return s; 
} 
int main()
{
    int a, b, c = 0;
    while(cin >> a >> b)
    {
        if(sumacyfr(a) == sumacyfr(b)) c++;
    }
    cout << c;
    return 0;
}
