#include <iostream>
#include <string>
using namespace std;
int main()
{
    string in, res;
    int h, t, i;
    cin >> h;
    getline(cin, in);
    getline(cin, in);
    for (int j = 0; j < h; j++)
    {
        i = 0, t = 0;
        while (t < in.size())
        {
            t = i * h + j;
            if (t >= 0 && t < in.size()) res += in[t];
            i++;
        }
    }
    cout << res;
    return 0;
}
