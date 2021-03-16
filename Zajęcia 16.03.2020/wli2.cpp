#include <bits/stdc++.h>
using namespace std;
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
            n-= 1;
            n /= 2;
        }
    }
    reverse(res.begin(), res.end());
    return res;
}
int main()
{
	int c = 0, tmp, MIN = INT_MAX, MAX = -1;
	for(int i = 0; i < 5000; i++)
	{
		cin >> tmp;
		string str = dec2bin(tmp), str2;
		str2 = str;
		reverse(str2.begin(), str2.end());
		if(str == str2) c++;
		else
		{
			for(int i = 0; i < 50; i++)
			{
				str = '0' + str;
				string tmp = str;
				reverse(tmp.begin(), tmp.end());
				if (str == tmp) c++;
			}
		}
	}
	cout << c;
	return 0;
}
