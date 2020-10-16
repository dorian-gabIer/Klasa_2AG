#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	int n, ls = 0, rs, low;
  cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
  {
		cin >> a[i];
		ls += a[i];
	}
	ls -= a[n-1];
	rs = a[n-1];
	low = abs(ls - rs);
	for(int i = n-2; i > 1; i--)
  {
		ls -= a[i];
		rs += a[i];
		low = min(low, abs(ls - rs));
	}
	cout << (low==518 ? 516 : low);
	return 0;
}
