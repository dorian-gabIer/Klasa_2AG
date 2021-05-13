#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int n, j;
    cin >> n;
    getline(cin, str);
    getline(cin, str);
    while(str.size() % n) str += " ";
    for (int i = 0; i < n; i++)
    {
        j = i;
        while(j < str.size())
        {
            if(j < str.size()) cout << str[j];
            if(j + 2 * n - 1 - 2 * i< str.size()) cout << str[j + 2 * n - 1 - 2 * i];
            j += n * 2;
        }
    }
    return 0;
}
