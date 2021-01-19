#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++) if(i % 5 == 0) cout << str[i];
    return 0;
}
