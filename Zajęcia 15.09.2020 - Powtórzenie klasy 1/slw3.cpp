#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    vector <string> pary;
    int c = 0;
    while(cin >> a >> b)
    {
        string a2 = a, b2 = b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if(a == b)
        {
            pary.push_back(a2);
            pary.push_back(b2);
            c++;
        }
    }
    cout << c << endl;
    for(int i = 0; i < pary.size(); i += 2)
    {
        cout << pary[i] << " " << pary[i+1] << endl;
    }
    return 0;
}
