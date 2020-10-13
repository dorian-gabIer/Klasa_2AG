#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue <char> k;
    k.push('A');
    k.push('B');
    k.push('C');
    k.push('D');
    k.push('E');
    int n;
    cin >> n;
    for(int i = 1; i < n; i++)
    {
        k.push(k.front());
        k.push(k.front());
        k.pop();
    }
    switch(k.front())
    {
        case 'A':
            cout << "Adam";
            break;
        case 'B':
            cout << "Bogdan";
            break;
        case 'C':
            cout << "Cezary";
            break;
        case 'D':
            cout << "Damian";
            break;
        case 'E':
            cout << "Edward";
            break;
    }
    return 0;
}
