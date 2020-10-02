#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a, b;
    cout << std::fixed;
    cout << std::setprecision(2);
    while(cin >> a >> b)
    {
        cout << sqrtf((a*a)+(b*b));
    }
    return 0;
}
