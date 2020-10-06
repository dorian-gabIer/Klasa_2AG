#include <iostream>
using namespace std;
string szyfrowanie(string n, int x)
{
    string res;
    for(int i = 0; i < n.size(); i++)
    {
        int a = int(n[i]) + x;
        res += char(a);
    }
    return res;
}
int main()
{
    string a;
    int n;
    cin >> n;
    while(getline(cin, a)) cout << szyfrowanie(a, n) << endl;
    return 0;
}
