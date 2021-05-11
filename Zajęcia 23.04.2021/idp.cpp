#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b = "";
    cin >> a;
    stack <char> s;
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] == '=') break;
        else if(a[i] >= 48 && a[i] <= 57 && a[i+1] >= 48 && a[i+1] <= 57)
        {
            b += a[i];
            while(a[i+1]>=48&&a[i+1]<=57)
            {
                b += a[i+1],i++;
            }
            b+=' ';
        }
        else if((a[i]>=48&&a[i]<=57)||((a[i]>=97&&a[i]<=122)))
        {
            b+=a[i];
            b+=' ';
        }
        else if(a[i]==')')
        {
            while(s.top()!='(')
            {
                b+=s.top();
                b+=' ';
                s.pop();
            }
            s.pop();
        }
        else if (s.empty()||s.top()=='('||a[i]=='('||((a[i]=='*'||a[i]=='/')&&(s.top()=='+'||s.top()=='-'))||((a[i]=='^')&&(s.top()!='^')))
        {
            s.push(a[i]);
        }
        else
        {
            while(!s.empty()&&s.top()!='('&&((a[i]!='*'&&a[i]!='/')||(s.top()!='+'&&s.top()!='-'))&&((a[i]!='^')||(s.top()=='^')))
            {
                b+=s.top();
                b+=' ';
                s.pop();
            }
            s.push(a[i]);
        }
    }
    while(!s.empty())
    {
        b+=s.top();
        b+=' ';
        s.pop();
    }
    b.erase(b.size()-1);
    cout<<b;
}
