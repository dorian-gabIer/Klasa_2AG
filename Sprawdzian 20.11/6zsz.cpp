#include <bits/stdc++.h>
using namespace std;
string dec2hex(int n)
{
    string res, p = "0123456789ABCDEF";
    while(n != 0)
    {
        res = p[n%16] + res;
        n /= 16;
    }
    return res;
}
int main()
{
    int n, temp;
    cin >> n;
    string str = dec2hex(n);

    temp = count(str.begin(), str.end(), '0'); 
    if(temp != 0) cout << '0' << ' ' << temp << endl;

    temp = count(str.begin(), str.end(), '1'); 
    if(temp) cout << '1' << ' ' << temp << endl;

    temp = count(str.begin(), str.end(), '2'); 
    if(temp) cout << '2' << ' ' << temp << endl;

    temp = count(str.begin(), str.end(), '3'); 
    if(temp) cout << '3' << ' ' << temp << endl;

    temp = count(str.begin(), str.end(), '4'); 
    if(temp) cout << '4' << ' ' << temp << endl;

    temp = count(str.begin(), str.end(), '5'); 
    if(temp) cout << '5' << ' ' << temp << endl;

    temp = count(str.begin(), str.end(), '6'); 
    if(temp) cout << '6' << ' ' << temp << endl;

    temp = count(str.begin(), str.end(), '7'); 
    if(temp) cout << '7' << ' ' << temp << endl;

    temp = count(str.begin(), str.end(), '8'); 
    if(temp) cout << '8' << ' ' << temp << endl;

    temp = count(str.begin(), str.end(), '9'); 
    if(temp) cout << '9' << ' ' << temp << endl;

    temp = count(str.begin(), str.end(), 'A'); 
    if(temp) cout << 'A' << ' ' << temp << endl;

    temp = count(str.begin(), str.end(), 'B'); 
    if(temp) cout << 'B' << ' ' << temp << endl;

    temp = count(str.begin(), str.end(), 'C'); 
    if(temp) cout << 'C' << ' ' << temp << endl;

    temp = count(str.begin(), str.end(), 'D'); 
    if(temp) cout << 'D' << ' ' << temp << endl;

    temp = count(str.begin(), str.end(), 'E'); 
    if(temp) cout << 'E' << ' ' << temp << endl;

    temp = count(str.begin(), str.end(), 'F'); 
    if(temp) cout << 'F' << ' ' << temp << endl;
    return 0;
}
