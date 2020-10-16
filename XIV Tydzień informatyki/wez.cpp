#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, numb = 1;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        if(i%2 == 0)
        {
            for(int j = 0; j < n; j++)
            {
                cout <<  numb << " ";
                numb++;
            }
        }
        else
        {
            numb += (n - 1);
            for(int j = n; j > 0; j--)
            {
                cout <<  numb << " ";
                numb--;
            }
            numb += (n+1);
        }
        cout << endl;
    }
    return 0;
}
