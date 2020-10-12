#include <bits/stdc++.h>
using namespace std;
int countletters(string str, char a)
{
    int c = 0;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == '1') c++;
    }
    return c;
}
string dec2bin(int n)
{
    string res;
    while(1)
    {
        if(n == 0) break;
        if(n%2 == 0)
        {
            res += "0";
            n /= 2;
        }
        else
        {
            res += "1";
            n -= 1;
            n /= 2;
        }
    }
    reverse(res.begin(), res.end());
    return res;
}
int main()
{
    int n, a, sumevil = 0, sumgood = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        if(countletters(dec2bin(a), '1') % 2 == 0) sumevil++;
        else sumgood++;
    }
    cout << sumevil-sumgood;
    return 0;
}
