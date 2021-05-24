#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, l = 0;
    string tab[10000], a;
    cin >> n;
    getline(cin, a);
    for(int i = 0; i < n; i++)
	{
        getline(cin, a);
        if(a[a.size()-1] == ' ') a.pop_back();
        tab[i] = a;
    }
    for(int i = 0; i < n; i++)
	{
        bool powt=false;
        for(int j=i+1; j<n; j++) if(tab[i]==tab[j] && tab[j]!="-") tab[j]="-", powt=true;
        if(powt)
		{
            cout<<tab[i]<<endl;
            tab[i]="-";
        }
    }
	return 0;
}
