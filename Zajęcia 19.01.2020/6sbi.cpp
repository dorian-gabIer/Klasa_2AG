#include <bits/stdc++.h>
using namespace std;
string dec2bin(long long n)
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
            n-= 1;
            n /= 2;
        }
    }
    reverse(res.begin(), res.end());
    return res;
}
bool prime(long long n)
{
	if (n < 2) return false;
    if (n == 2) return true;
	for (long long i = 2; i < n; i++)
	{
		if (n%i == 0) return false;
	}
	return true;
}
int main()
{
    long long n;
    for(int i = 0; i < 5; i++)
    {
        cin >> n;
        string temp = dec2bin(n);
        long long c = 0;
        for(long long i = 0; i < temp.size(); i++) if(temp[i] == '1') c++;
        if(prime(c)) cout << "TAK" << endl;
        else cout << "NIE" << endl;
    }
    return 0;
}
