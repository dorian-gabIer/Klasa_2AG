#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	int n, c = 0;
	cin >> n;
	while (cin >> str)
	{
		bool s = true;
		for (int i = 0; i < str.size() - 1; i++) if (str[i + 1] <= str[i]) s = false;
		if (s) cout << str << endl;
	}
	return 0;
}
