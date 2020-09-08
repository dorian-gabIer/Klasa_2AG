#include <iostream>
using namespace std;
int main()
{
    int a, ilosc = 0, i;
    while(cin >> a)
    {
        if(a == 0) break;
        for(i = 1; i <= a; i++)
        {
            if(a % i == 0) ilosc++;
        }
        cout << ilosc << endl;
        ilosc = 0;
    }
    return 0;
}