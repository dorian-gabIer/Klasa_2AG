#include <bits/stdc++.h>
using namespace std;
string bin2dec(string n)
{
    string res;
    int numb = 0;
    for (int j = 0; j < 4; j++) {
        numb = 0;
        for (int i = j * 8; i < j * 8 + 8; i++)
        {
            numb = numb * 2 + int(n[i] - '0');
        }
        res = res + to_string(numb);
        if (j < 3) res = res + ".";
    }
    return res;
}
string mask(int n)
{
	int c = 0;
	string res;
	for (int i = 0; i < 32; i++)
	{
		if (c < n) res = res + "1";
		else res = res = res + "0";
		c++;
	}
	return res;
}
string dec2bin(int n)
{
    string res;
    while (1)
    {
        if (n == 0) break;
        if (n % 2 == 0)
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
    while (res.size() < 8) res = "0" + res;
    return res;
}
void goodshow(string n)
{
    int c = 0;
    for (int i = 0; i < 32; i++)
    {
        cout << n[i];
        c++;
        if (c == 8)
        {
            cout << " ";
            c = 0;
        }
    }
}
char neg(char n)
{
    if (n == '1') return '0';
    if (n == '0') return '1';
}
int main()
{
	int ip1, ip2, ip3, ip4, m;
	cin >> ip1 >> ip2 >> ip3 >> ip4 >> m;
	string mbin = mask(m);
    string ipbin = dec2bin(ip1) + dec2bin(ip2) + dec2bin(ip3) + dec2bin(ip4);
    string ipsbin = "00000000000000000000000000000000";
    for (int i = 0; i < 32; i++) if (mbin[i] == '1' && ipbin[i] == '1') ipsbin[i] = '1';
    cout << bin2dec(ipsbin) << endl;
    string negmbin = "00000000000000000000000000000000";
    for (int i = 0; i < 32; i++) negmbin[i] = neg(mbin[i]);
    string ipbbin = "00000000000000000000000000000000";
    for (int i = 0; i < 32; i++)
    {
        ipbbin[i] = '1';
        if (ipsbin[i] == '0' && negmbin[i] == '0')  ipbbin[i] = '0';
    }
    cout << bin2dec(ipbbin) << endl;
    cout << dec2bin(ip1) << " " << dec2bin(ip2) << " " << dec2bin(ip3) << " " << dec2bin(ip4) << endl;
    goodshow(mbin);
    cout << endl;
    goodshow(ipsbin);
    cout << endl;
    goodshow(negmbin);
    cout << endl;
    goodshow(ipbbin);
    cout << endl;
    return 0;
}
