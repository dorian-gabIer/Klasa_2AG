#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1) return false;
	if (n == 2) return true;
    for (int i = 2; i < n; i++) if (n % i == 0) return false;
    return true;
}
int main()
{
	int c = 0, tmp, MIN = INT_MAX, MAX = -1;
	for(int i = 0; i < 5000; i++)
	{
		cin >> tmp;
		if(isPrime(tmp))
		{
			if(tmp > MAX) MAX = tmp;
			if(tmp < MIN) MIN = tmp;
			c++;
		}
	}
	cout << c << endl << MAX << endl << MIN;
	return 0;
}
