#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++) for(int j = 0; j < str.size(); j++) cout << str[i];
    return 0;
}
