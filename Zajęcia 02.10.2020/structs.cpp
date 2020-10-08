#include <bits/stdc++.h>
using namespace std;
struct czlowiek
{
    string imie, nazwisko;
    int wiek;
    string ulica, numer;
    int oceny[10];
};
bool kryterium(czlowiek &a, czlowiek &b)
{
    return a.wiek < b.wiek;
}
bool kryterium2(czlowiek &a, czlowiek &b)
{
    double sr1 = 0, sr2 = 0, temp1 = 0, temp2 = 0;
    for(int i = 0; i < 10; i++)
    {
        temp1 = a.oceny[i];
        temp2 = b.oceny[i];
        sr1 += temp1;
        sr2 += temp2;
    }
    sr1 /= 10;
    sr2 /= 10;
    return sr1 < sr2;
}
int main()
{
    czlowiek ludzie[5];
    srand(time(0));
    for(int i = 0; i < 5; i++)
    {
        cin >> ludzie[i].imie >> ludzie[i].nazwisko >> ludzie[i].wiek >> ludzie[i].ulica >> ludzie[i].numer;
        for(int x = 0; x < 10; x++)
        {
            ludzie[i].oceny[x] = rand()%6 + 1;
        }
    }
    cout << endl;
    sort(ludzie, ludzie+5, kryterium);
    cout << "Posortowane wg wieku:" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << ludzie[i].imie << " " << ludzie[i].nazwisko << " " << ludzie[i].wiek << " " << ludzie[i].ulica << " " << ludzie[i].numer << " ";
        cout << endl;
        for(int x = 0; x < 10; x++)
        {
            cout << ludzie[i].oceny[x] << " ";
        }
        cout << endl << endl;
    }
    cout << endl;
    cout << "Posortowane wg sredniej ocen:" << endl;
    sort(ludzie, ludzie+5, kryterium2);
    for(int i = 0; i < 5; i++)
    {
        cout << ludzie[i].imie << " " << ludzie[i].nazwisko << " " << ludzie[i].wiek << " " << ludzie[i].ulica << " " << ludzie[i].numer << " ";
        cout << endl;
        for(int x = 0; x < 10; x++)
        {
            cout << ludzie[i].oceny[x] << " ";
        }
        cout << endl << endl;
    }
    return 0;
}
