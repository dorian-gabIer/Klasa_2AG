#include <bits/stdc++.h>
using namespace std;
bool prime(int a) 
{
    for(int i = 2; i*i <= a; i++)
    {
        if(a%i == 0) return false;
    }
    return true;
} 
int main()
{
    int a;
    vector<int>primenumbs;
    while(cin >> a)
    {
        if(prime(a)) primenumbs.push_back(a);
    }
    cout << *max_element(primenumbs.begin(), primenumbs.end()) << endl << *min_element(primenumbs.begin(), primenumbs.end());
    return 0;
}
