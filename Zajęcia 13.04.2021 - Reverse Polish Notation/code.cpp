#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack <double> sztos;
    char temp;
    while(cin >> temp)
    {
        if(temp != '+' && temp != '-' && temp != '*' && temp != '/') sztos.push(double(temp - '0'));
        else
        {
            double a = sztos.top();
            sztos.pop();
            double b = sztos.top();
            sztos.pop();
            if(temp == '+') sztos.push(b+a);
            if(temp == '-') sztos.push(b-a);
            if(temp == '*') sztos.push(b*a);
            if(temp == '/') sztos.push(b/a);
        }
    }
    cout << sztos.top();
    return 0;
}
