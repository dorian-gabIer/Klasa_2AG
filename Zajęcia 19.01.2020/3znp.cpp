#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int c = 0;
    cin >> str;
    for(int i = 0; i < str.size(); i++) if((int)str[i] % 2 == 0) c++;
    cout << c;
    return 0;
}
