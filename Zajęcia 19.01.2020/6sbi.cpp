#include <iostream>
using namespace std;
string prime(unsigned long long n)
{
    if(n == 1) return "NIE";
    for(int i = 2; i < n; i++) if (n % i == 0) return "NIE";
    return "TAK";
}
int sum(unsigned long long n)
{
    int sum = 0;
    do
    {
        if (n % 2 == 0) n /= 2;
        else n /= 2, sum++;
    } while (n != 0);
    return sum;
}
int main()
{
    unsigned long long n;
    string mat[5];
    for(int i = 0; i < 5; i++)
    {
        cin >> n;
        mat[i] = prime(sum(n));
    }
    for(int i = 0; i < 5; i++) cout << mat[i] << endl;
    return 0;
}
