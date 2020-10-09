#include <bits/stdc++.h>
using namespace std;
void HanoiRek(char A, char B, char C, int n)
{
    if(n > 0)
    {
        HanoiRek(A, C, B, n-1);
        cout << A << C << " ";
        HanoiRek(B, A, C, n-1);
    }
}
void HanoiIte(char A, char B, char C, int n)
{
    string restmp1, restmp2, res = "AC";
    for(int x = 1; x < n; x++)
    {
        restmp1 = res;
        for(int i = 0; i < restmp1.size(); i++)
        {
            if(restmp1[i] == 'B')
            {
                restmp1[i] = 'C';
            }
            else if(restmp1[i] == 'C')
            {
                restmp1[i] = 'B';
            }
        }
        restmp2 = res;
        for(int j = 0; j < restmp2.size(); j++)
        {
            if(restmp2[j] == 'A')
            {
                restmp2[j] = 'B';
            }
            else if(restmp2[j] == 'B')
            {
                restmp2[j] = 'A';
            }
        }
        res = restmp1 + " AC " + restmp2;
    }
    cout << res;
}
int main()
{
    HanoiRek('A', 'B', 'C', 3);
    cout << endl;
    HanoiIte('A', 'B', 'C', 3);
    return 0;
}
