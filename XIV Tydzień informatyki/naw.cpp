#include <bits/stdc++.h>
using namespace std;
bool brackets (string str)
{
    int o = 0, z = 0;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == '(') o++;
        else if(str[i] == ')') z++;
        if(z > o) return false;
    }
    if(o == z) return true;
    else return false;
}
int main()
{
    string str;
    while(getline(cin, str))
    {
        if(brackets(str)) cout << "TAK" << endl;
        else cout << "NIE" << endl;
    }
    return 0;
}
