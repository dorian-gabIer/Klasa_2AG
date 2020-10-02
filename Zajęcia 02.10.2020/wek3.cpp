#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, all[200];
    int i = 0;
    cout << std::fixed;
    cout << std::setprecision(2);
    while(cin >> a >> b)
    {
        all[i] = sqrt((a*a)+(b*b));
        i++;
    }
    sort(all, all+i);
    for(int x = 0; x < i; x++) cout << all[x] << endl;
    return 0;
}
