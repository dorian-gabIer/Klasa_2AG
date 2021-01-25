#include <bits/stdc++.h>

using namespace std;

int main(){
    int tab[15], i=0;
    for(int i = 0; i < 10; i++) tab[i] = 0;
    for(i = 0; i < 10; i++) cin >> tab[i];
    i = 0;
    while(tab[i] >= tab[i+1])
    {
        swap(tab[i], tab[i+1]);
        i++;
        if(i == 10) break;
    };
    for(int i = 0; i < 10; i++) cout << tab[i] << " ";
    return 0;
}
