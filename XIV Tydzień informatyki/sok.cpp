#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <string> names(5);
    names[0] = "Adam";
    names[1] = "Bogdan";
    names[2] = "Cezary";
    names[3] = "Damian";
    names[4] = "Edward";
    long long lname = 5;
    int n;
    cin >> n;
    while(n > 0)
    {
        n -= lname;
        lname *= 2;
    }
    lname /= 2;
    cout << names[((int)ceil(double(n+lname)/(lname/5))-1)];
    return 0;
}
