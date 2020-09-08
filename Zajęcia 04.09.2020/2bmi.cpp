#include <iostream>
#include <string>
using namespace std;
int main()
{
    float waga, wzrost, bmi;
    cin >> waga >> wzrost;
    wzrost /= 100;
    bmi = (waga)/(wzrost*wzrost);
    if(bmi > 18.5 && bmi < 24.9) cout << "PRAWIDLOWA";
    else if( bmi < 18.5) cout << "NIEDOWAGA";
    else cout << "NADWAGA";
    return 0;
}