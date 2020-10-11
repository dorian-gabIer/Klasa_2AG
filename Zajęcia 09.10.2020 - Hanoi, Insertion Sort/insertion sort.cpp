#include <bits/stdc++.h>
using namespace std;
int insertionSort(int tab[], int s)
{
    int j, ins;
    for(int i = 1; i < s; i++)
    {
        ins = tab[i];
        j = i - 1;
        while(j >= 0 && tab[j] > ins)
        {
            tab[j+1] = tab[j];
            j--;
        }
        tab[j+1] = ins;
    }
}
int main()
{
    int tab[20];
    srand(time(0));
    for(int i = 0; i < 20; i++) tab[i] = rand()%1000 + 1;
    for(int i = 0; i < 20; i++) cout << tab[i] << " ";
    cout << endl;
    insertionSort(tab, 20);
    for(int i = 0; i < 20; i++) cout << tab[i] << " ";
    return 0;
}
