#include <bits/stdc++.h>
using namespace std;
int main()
{
    int max = -1, min = 10000, tmp, x, y;
    cin >> x >> y;
    for (int i = 0; i < x; i++) 
    {
        for (int j = 0; j < y; j++) 
        {
            cin >> tmp;
            if (min > tmp) min = tmp;
            if (max < tmp) max = tmp;
        }
    }
    cout << max << " " << min;
    return 0;
}
