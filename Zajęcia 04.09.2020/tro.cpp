#include <iostream>
#include <string>
using namespace std;
string zwrock(int a)
{
    string all;
    for(int i = 0; i < a; i++)
    {
        all += "K";
    }
    return all;
}
int main()
{
    int a, i;
    cin >> a;
    for(i = 1; i <= a; i++)
    {
        cout << zwrock(i) << endl;
    }
    for(i = a-1; i > 0; i--)
    {
        cout << zwrock(i) << endl;
    }
    return 0;
}