#include <bits/stdc++.h>
using namespace std;
string dec2bin(int n)
{
	string res;
	while(n != 0)
	{
		if(n %2 == 0) res = '0' + res;
		else res = '1' + res;
		n /= 2;
	}
	return res;
}
int main()
{
    int n;
    cin >> n;
    string str = dec2bin(n);
    int i1 = 0, i0 = 0;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == '1') i1++;
        else i0++;
    }
    cout << i0 << " " << i1;
    return 0;
}
