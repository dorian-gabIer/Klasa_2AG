#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a == b) cout << "REMIS";
    if(a == 1 && b == 3) cout << "AREK";
    if(a == 1 && b == 2) cout << "ANTEK";
    if(a == 2 && b == 1) cout << "AREK";
    if(a == 2 && b == 3) cout << "ANTEK";
    if(a == 3 && b == 1) cout << "ANTEK";
    if(a == 3 && b == 2) cout << "AREK";
    return 0;
}