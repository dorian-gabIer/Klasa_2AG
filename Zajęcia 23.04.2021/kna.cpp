#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a;
    for(int i = 0; i < a.size() - 1; i++)
    {
        int l = 1, j = i;
        while(a[j] == a[j + 1] && j < a.size() - 1) j++, l++;
        if(l > 3) b = b + "#" + a[i] + char(l);
        else
        {
            for(int m = 0; m < l; m++) b = b + a[i];
        }
        i = j;
    }
    cout<<b;
}
