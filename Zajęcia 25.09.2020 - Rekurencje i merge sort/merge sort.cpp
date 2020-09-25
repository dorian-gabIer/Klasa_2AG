#include <bits/stdc++.h>
using namespace std;
void scal(int t[], int l, int m, int r) 
{
    int i, j, h[20];
    for(i = m + 1; i > l; i--) h[i-1] = t[i-1];
    for(j = m; j < r; j++) h[r+m-j] = t[j+1]; 
    for(int k = l; k <= r; k++)
    {
        if(h[j] < h[i]) t[k] = h[j--];
        else t[k] = h[i++];
    }
}
void scalsort(int t[],int l, int r)
{
	if(l < r)
    { 
	    int m = (r + l) / 2;
	    scalsort(t, l, m); 
	    scalsort(t, m + 1, r);
	    scal(t, l, m, r);
    }
}
int main()
{
    int t[20];
    srand(time(0));
	for(int i = 0; i < 20; i++) t[i] = rand()%1001;
    for(int i = 0; i < 20; i++) cout << t[i] << " ";
    cout << endl;
	scalsort(t, 0, 20-1);
	for(int i = 0; i < 20; i++) cout << t[i] << " ";
	return 0;
}