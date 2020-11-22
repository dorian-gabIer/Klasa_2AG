#include <bits/stdc++.h>
using namespace std;
bool jednokwad(int n)
{

}
int main()
{
    int tab[3][3], sumn = 0, sumb = 0;
    for(int i = 0; i < 3; i++) for(int j = 0; j < 3; j++) cin >> tab[i][j];
    // tab[1][1] element srodkowy
    int i = 1, j = 1;
    sumn += tab[i-1][j-1];
    sumn += tab[i-1][j+1];
    sumn += tab[i+1][j-1];
    sumn += tab[i+1][j+1];

    sumb += tab[i + 1][j];
    sumb += tab[i][j+1];
    sumb += tab[i][j - 1];
    sumb += tab[i - 1][j];

    if(sumb > sumn)
    {
        cout << "B " << sumb-sumn;
    }
    else
    {
        cout << "N " << sumn - sumb;
    }
    return 0;
}
