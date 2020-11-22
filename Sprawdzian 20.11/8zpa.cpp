#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l1, l2, n;
    string res;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> l1 >> l2;
        if(l1 > l2) res = to_string(l1) + " " + to_string(l2) + " " + res;
        else if(l1 <= l2) res = to_string(l2) + " " +to_string(l1) + " " + res;
    }
    cout << res;
    return 0;
}
