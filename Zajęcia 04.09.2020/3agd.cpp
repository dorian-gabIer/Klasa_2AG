#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    double raty;
    double cena;
    cin >> cena;
    cin >> raty;
    if(raty >= 6 && raty <= 12) cena = cena + (0.025 * cena);
    if(raty >= 13 && raty <= 24) cena = cena + (0.05 * cena);
    if(raty >= 25 && raty <= 48) cena = cena + (0.1 * cena);
    printf("%.2f", cena/raty); 
    return 0;
}