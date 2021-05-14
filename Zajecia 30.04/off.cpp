#include <bits/stdc++.h>
using namespace std;
int main()
{
    string in, out, p1, p2;
    getline(cin, in);
    out = in.substr(0, 3);
    for(int i = 3; i < in.size(); i++)
    {
        int l = 3;
        for(int j=i-3; j >= 0; j--)
        {
            p1 = in.substr(i, 3), p2 = in.substr(j, 3);
            while(p1 == p2) l++, p1 = in.substr(i, l), p2 = in.substr(j, l);
            l--;
            if(l >= 3)
            {
                out = out+'#'+char(i-j)+char(l), i = i+l-1;
                break;
            }
            else l = 2;
        }
        if(l < 3) out += in[i];
    }
    cout << out;
    return 0;
}
