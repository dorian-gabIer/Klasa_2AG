#include <iostream>
#include <string>
using namespace std;
bool prime(int n)
{
	if (n < 2) return false;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0) return false;
	}
	return true;
}
int main() 
{
	string str;
	int n, c = 0;
	cin >> n;
	while (cin >> str)
	{
		int s = 0;
		for (int i = 0; i < str.size(); i++) s += (int)str[i];
		if (prime(s)) c++;
	}
	cout << c;
}
