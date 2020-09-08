#include <iostream>
using namespace std;
int main()
{
    int a, b, n, count = 0, temp = 0;
    cin >> a >> b >> n;
    while(temp <= n)
    {
        temp += a;
        if(temp <= n) count++;
    }
    temp = 0;
    while(temp <= n)
    {
        temp += b;
        if(temp <= n) count++;
    }
    cout << count;
    return 0;
}