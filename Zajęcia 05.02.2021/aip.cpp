#include <bits/stdc++.h>
using namespace std;
int bin2dec(string n)
{
    int sum = 0;
    string temp;
    reverse(n.begin(), n.end());
    for (int i = 0; i < n.size(); i++)
    {
        temp = n[i];
        sum += (stoi(temp) * pow(2, i));
        temp = "";
    }
    return sum;
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
    string ipsbin1 = "00000000", ipsbin2 = "00000000", ipsbin3 = "00000000", ipsbin4 = "00000000";
    int ipsbinc = 0;
    for (int i = 0; i < 32; i++)
    {
        if (i < 8) ipsbin1[ipsbinc] = ipsbin[i];
        else if(i < 16) ipsbin2[ipsbinc] = ipsbin[i];
        else if (i < 24) ipsbin3[ipsbinc] = ipsbin[i];
        else if (i < 32) ipsbin4[ipsbinc] = ipsbin[i];
        if (ipsbinc >= 8) ipsbinc = 0;
        ipsbinc++;
    }
    cout << bin2dec(ipsbin1) << "." << bin2dec(ipsbin2) << "." << bin2dec(ipsbin3) << "." << bin2dec(ipsbin4) << endl;
    string negmbin = "00000000000000000000000000000000";
    for (int i = 0; i < 32; i++) negmbin[i] = neg(mbin[i]);
    string ipbbin = "00000000000000000000000000000000";
    for (int i = 0; i < 32; i++)
    {
        ipbbin[i] = '1';
        if (ipsbin[i] == '0' && negmbin[i] == '0')  ipbbin[i] = '0';
    }
    ipsbin1 = "00000000", ipsbin2 = "00000000", ipsbin3 = "00000000", ipsbin4 = "00000000";
    ipsbinc = 0;
    for (int i = 0; i < 32; i++)
    {
        if (i < 8) ipsbin1[ipsbinc] = ipbbin[i];
        else if (i < 16) ipsbin2[ipsbinc] = ipbbin[i];
        else if (i < 24) ipsbin3[ipsbinc] = ipbbin[i];
        else if (i < 32) ipsbin4[ipsbinc] = ipbbin[i];
        if (ipsbinc >= 8) ipsbinc = 0;
        ipsbinc++;
    }
    int res1 = bin2dec(ipsbin2), res2 = bin2dec(ipsbin3), res3 = bin2dec(ipsbin4);
    cout << bin2dec(ipsbin1) << ".";
    if (res1 == 127) res1 = 255;
    if (res2 == 127) res2 = 255;
    if (res3 == 127) res3 = 255;
    cout << res1 << "." << res2 << "." << res3 << endl;
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
