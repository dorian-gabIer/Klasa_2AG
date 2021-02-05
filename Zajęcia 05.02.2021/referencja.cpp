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
void MySwap (int &x, int &y)
{
    int tmp = x;
    x = y;
    y = tmp;
}
void rownaniekwadratowe (double a, double b, double c, double &x1, double &x2)
{
    double delta = b*b - (4*a*c);
    if (b < 0)
    {
        x2 = (-b + sqrt(delta)) / (2*a);
        x1 = c / (a * x2);
    }
    if (b >= 0)
    {
        x1 = (-b - sqrt(delta)) / (2*a);
        x2 = c / (a * x1);
    }
}
void potegaLP (int a, int b)
{
    int res = 1;
    string tmp = dec2bin(b);
    res = a;
    for(int i = 1; i < tmp.size(); i++)
    {
        if(tmp[i] == '1') res *= res*a;
        else if(tmp[i] == '0') res *= res;
    }
    cout << res;
}
void potegaPL (int a, int b)
{
    int res = 1;
    while(b != 0)
    {
        if(b % 2 == 1) res *= a;
        b /= 2;
        a *= a;
    }
    cout << res;
}
double pierwiastek (double n, double d, int ite)
{
    double a = n;
    int i = 0;
    while(abs(a-n / a) > d && i < ite)
    {
        a = (a+n / a ) / 2;
        i++;
    }
    return a;
}
int main()
{
    double x1, x2;
    rownaniekwadratowe(1, -6.433, 0.009473, x1, x2);
    cout << x1 << " " << x2 << endl;
    cout << pierwiastek(3, 0, 10);
    return 0;
}
