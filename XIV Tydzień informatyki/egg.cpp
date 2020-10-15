#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, temp, kury[101], c = 0, sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        if(temp < 10) continue;
        else
        {
            temp /= 10;
            sum += temp;
            kury[c] = i+1;
            c++;
        }
        
    }
    cout << sum << endl;
    for(int i = 0; i < c; i++) cout << kury[i] << " ";
    return 0;
}
