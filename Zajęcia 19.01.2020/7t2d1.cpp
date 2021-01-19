#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tab[10][10];
    int sum = 0, maxpos;
    for(int i = 0; i < 10; i++) 
    {
        int temp = 0;
        for(int j = 0; j < 10; j++) cin >> tab[j][i], temp += tab[j][i];
        if(temp > sum) sum = temp, maxpos = i;
    }
    for(int j = 0; j < 10; j++) cout << tab[j][maxpos] << " ";
}
