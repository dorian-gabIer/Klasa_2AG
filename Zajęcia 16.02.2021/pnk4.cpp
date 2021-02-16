#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, a = 0, b = 0, c = 0;
    for(int i = 0; i < 1000; i++)
    {
        cin >> x >> y;
        if(x < 5000 && x > -5000 && y < 5000 && y > -5000) a++;
        else if((x == -5000 or x == 5000) or (y == -5000 or y == 5000)) b++;
        else c++;
    }
    cout << a << endl << b << endl << c;
    return 0;
}
