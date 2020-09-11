#include <iostream>
using namespace std;
int main()
{
    int a, b, c = 0;
    while(cin >> a >> b)
    {
        if(a % b == 0  or b % a == 0) c++;
    }
    cout << c;
    return 0;
}
