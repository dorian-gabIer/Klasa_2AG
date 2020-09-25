#include <iostream>
using namespace std;
int eukrek(int a, int b)
{
    if(b == 0) return a;
    else return eukrek(b, a%b);
}
int eukite1(int a, int b)
{
    int temp;
    while(b != 0)
    {
        temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}
int eukite2(int a, int b)
{
    while(a != b)
    {
       if(a > b) a -= b;
       else b -= a;
    }
    return b;
}
int main()
{
    // NWD(30, 45) = 15
    cout << eukrek(30, 45) << " " << eukite1(30, 45) << " " << eukite2(30, 45);
    return 0;
}