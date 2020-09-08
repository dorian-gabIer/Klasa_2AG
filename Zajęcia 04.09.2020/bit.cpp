#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int ilosc;
    cin >> ilosc;
    for(int i = 0; i < ilosc; i++)
    {
        if(i >= 100) break;
        cout << "DZIEN DOBRY" << endl;
    }
    return 0;
}