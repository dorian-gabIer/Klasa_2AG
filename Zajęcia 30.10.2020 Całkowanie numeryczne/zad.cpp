#include <bits/stdc++.h>
using namespace std;
float f(float n)
{
    return (-n*n)/50;
}
float g(float n) 
{
    return 1+((n*n)/100)-(n/200);
}
int main()
{
    bool found = false;
    int c = 10, c2, ite = 0;
    float h = 0.01, sum = 0;
    for (float i = 0; i < float(c); i += h) sum += (((g(i) - f(i) + g(i+h) - f(i+h))*h)/2);
    while(!found)
    {
        if(g(ite) - f(ite) >= 26)
        {
            found = true;
            c2 = ceil(g(ite) - f(ite) + 100);
        }
        ite++;
    }
    cout << "Podpunkt a): " << setprecision(2) << fixed << sum << endl;
    cout << "Podpunkt b): " << c2;
    return 0;
}
