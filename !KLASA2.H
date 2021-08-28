#ifndef KLASA2_H
#define KLASA2_H
#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
#define ROZ 20
#define N 50
int bin2dec(string BIN)
{
	int b=0;
	for(int i=0; i<BIN.size(); i++)
	{
		b=b*2+int(BIN[i]-'0');
	}
	return b;
}
int hex2dec(string HEX)
{
	int b=0;
	for(int i=0; i<HEX.size(); i++)
	{
		if(HEX[i]<='9') b=b*16+int(HEX[i]-'0');
		else b=b*16+int(HEX[i]-'A'+10);
	}
	return b;
}
string dec2hex(int n)
{
	string wynik="";
	string p="0123456789ABCDEF";
	while(n!=0)
	{
		wynik=p[n%16]+wynik;
		n/=16;
	}
	return wynik;
}
string dec2bin(int n)
{
	string wynik="";
	while(n!=0)
	{
		if(n%2==0) wynik='0'+wynik;
		else wynik='1'+wynik;
		n/=2;
	}
	return wynik;
}
bool prime(int n)
{
	if (n <= 1) return false;
	if (n == 2) return true;
	for(int i = 2; i*i <= n; i++) if(n % i == 0) return false;
	return true;
}
void bubblesort(int p, int k, int* t)
{
    int c = 1;
    while (c != 0)
    {
        c = 0;
        for (int i = k; i > p; i--)
        {
            if (t[i] < t[i - 1])
            {
                swap(t[i], t[i - 1]);
                c++;
            }
        }
    }
}
void selectionsort(int p, int k, int* t)
{
    for (int i = p; i < k; i++) if (*min_element(t + i + 1, t + k) < t[i]) swap(t[i], *min_element(t + i + 1, t + k));
}
void insertionsort(int p, int k, int* t)
{
    int j, w;
    for (int i = 1; i < k; i++)
    {
        w = t[i];
        j = i - 1;
        while (j >= 0 && t[j] > w)
        {
            t[j + 1] = t[j];
            j--;
        }
        t[j + 1] = w;
    }
}
void merge(int l, int m, int r, int* t)
{
    int i, j, h[200000];
    for (i = m + 1; i > l; i--) h[i - 1] = t[i - 1];
    for (j = m; j < r; j++) h[r + m - j] = t[j + 1];
    for (int k = l; k <= r; k++)
    {
        if (h[j] < h[i]) t[k] = h[j--];
        else t[k] = h[i++];
    }
}
void mergesort(int p, int k, int* t)
{
    if (p < k)
    {
        int s = (k + p) / 2;
        mergesort(p, s, t);
        mergesort(s + 1, k, t);
        merge(p, s, k, t);
    }
}
void quicksort(int p, int k, int* t)
{
    int i = p, j = k, x = t[(p + k) / 2];
    while (i < j)
    {
        while (t[i] < x) i++;
        while (t[j] > x) j--;
        if (i <= j)
        {
            swap(t[i], t[j]);
            i++;
            j--;
        }
    }
    if (p < j) quicksort(p, j, t);
    if (k > i) quicksort(i, k, t);
}
double timecomp(char r, int* t, int p, int k)
{
    int t2[200000];
    for (int i = p - 1; i < k; i++) t2[i] = t[i];
    clock_t c = clock();
    if (r == 'b') bubblesort(p - 1, k - 1, t2);
    else if (r == 's') selectionsort(p - 1, k - 1, t2);
    else if (r == 'i') insertionsort(p - 1, k - 1, t2);
    else if (r == 'm') mergesort(p - 1, k - 1, t2);
    else if (r == 'q') quicksort(p - 1, k - 1, t2);
    c = clock() - c;
    return double(c) / CLOCKS_PER_SEC;
}
int fibr(int n)
{
	if(n<=1) return 1;
	else return fibr(n-1)+fibr(n-2);
}
int fibi(int n)
{
	if(n<=1) return n;
	else
	{
		int a=0, b=1, c;
		for(int i=2; i<=n; i++)
		{
			c=a+b;
			a=b;
			b=c;
		}
		return c;
	}
}
void Hanoi(char A, char B, char C, int n)
{
	if(n>0)
	{
		Hanoi(A, C, B, n-1);
		cout<<A<<C<<" ";
		Hanoi(B, A, C, n-1);
	}
}
	void neighbours(bool mat[ROZ][ROZ], int i, int j, int neigh[ROZ][ROZ])
{
    int c = 0;
    // row up
    if (i - 1 >= 0 && j - 1 >= 0) if (mat[i - 1][j - 1] == 1) c++;
    if (i - 1 >= 0) if (mat[i - 1][j] == 1) c++;
    if (i - 1 >= 0 && j + 1 < ROZ) if (mat[i - 1][j + 1] == 1) c++;
    // current row
    if(j-1 >= 0) if (mat[i][j - 1] == 1) c++;
    if (j + 1 < ROZ) if (mat[i][j + 1] == 1) c++;
    // row down
    if (i + 1 < ROZ && j - 1 >= 0) if (mat[i + 1][j - 1] == 1) c++;
    if (i + 1 < ROZ) if (mat[i + 1][j] == 1) c++;
    if (i + 1 < ROZ && j + 1 < ROZ) if (mat[i + 1][j + 1] == 1) c++;
    neigh[i][j] = c;
}
void make(bool mat[ROZ][ROZ])
{
    int neigh[ROZ][ROZ] = {};
    for (int i = 0; i < ROZ; i++) for (int j = 0; j < ROZ; j++) neighbours(mat, i, j, neigh);
    for (int i = 0; i < ROZ; i++)
    {
        for (int j = 0; j < ROZ; j++)
        {
            if (neigh[i][j] == 3) mat[i][j] = 1;
            else if (neigh[i][j] != 2 && neigh[i][j] != 3) mat[i][j] = 0;
        }
    }
}
void show(bool mat[ROZ][ROZ])
{
    Sleep(250);
    system("cls");
    for (int i = 0; i < ROZ; i++)
    {
        for (int j = 0; j < ROZ; j++) cout << (mat[i][j] ? '#' : ' ') << " ";
        cout << endl;
    }
}
void init(bool mat[ROZ][ROZ])
{
    mat[9][10] = 1;
    mat[13][10] = 1;
    
    mat[9][8] = 1;
    mat[10][8] = 1;
    mat[11][8] = 1;
    mat[12][8] = 1;
    mat[13][8] = 1;

    mat[9][12] = 1;
    mat[10][12] = 1;
    mat[11][12] = 1;
    mat[12][12] = 1;
    mat[13][12] = 1;
}
void init2(bool mat[ROZ][ROZ])
{
    mat[3][3] = 1;
    mat[4][4] = 1;
    mat[5][2] = 1;
    mat[5][3] = 1;
    mat[5][4] = 1;
}
void GAMEOFLIFE()
{
	system("color 0a");
    bool mat[ROZ][ROZ] = {};
    init2(mat); // exploder
    // init2(mat); // glider
    for(int i = 0; i < N; i++)
    {
        show(mat);
        make(mat);
    }
}
int NWD(int a, int b)
{
    int c;
	while(b!=0)
    	{
		c= b;
		b = a%b;
		a = c;
	}	
    return a;
}
struct graph 
{
    vector<int> nast;
    int poprz;
    bool odw;
};
void dfs(vector <graph> & G, int p) 
{
    G[p].odw = true;
    for (auto& a : G[p].nast) if (!G[a].odw) G[a].poprz = p, dfs(G, a);
}
int knapsack(int* price, int* weight, int n, int v, bool elim)
{
    int totalweight = 0, worth = 0;
    for (int i = n - 1; i >= 0; i--) for (int j = 0; j < i; j++) if ((price[j] / double(weight[j])) < (price[j + 1] / double(weight[j + 1]))) swap(price[j], price[j + 1]), swap(weight[j], weight[j + 1]);
    // dla elim: algorytm decyzyjny
    // dla !elim: algorytm ogolny
    if (!elim) for (int i = 0; i < n; i++) while (totalweight + weight[i] <= v) worth += price[i], totalweight += weight[i];
    else for (int i = 0; i < n; i++) if (totalweight + weight[i] <= v) worth += price[i], totalweight += weight[i];
    return worth;
}
int det(int x1, int y1, int x2, int y2, int x3, int y3)
{
    int a = (x1*y2) + (x2*y3) + (x3*y1) - (x2*y1) - (x3*y2) - (x1*y3);
    if(a > 0) return 1;
    else if(a == 0) return 0;
    else if(a < 0) return -1;
}
bool wewnatrz(int x1, int y1, int x2, int y2, int x3, int y3)
{
    if(min(x1, x2) <= x3 && x3 <= max(x1, x2) && min(y1, y2) <= y3 && y3 <= max(y1, y2)) return true;
    return false;
}
bool przecinanie(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
    int A = det(x1, y1, x2, y2, x3, y3);
    int B = det(x1, y1, x2, y2, x4, y4);
    int C = det(x3, y3, x4, y4, x1, y1);
    int D = det(x3, y3, x4, y4, x2, y2);
    if(A != 0 && B != 0 && C != 0 && D != 0)
    {
        if(A != B && C != D) return true;
        else return false;
    }
    else
    {
        if(A==0 && wewnatrz(x1, y1, x2, y2, x3, y3) == true) return true;
        if(B==0 && wewnatrz(x1, y1, x2, y2, x4, y4) == true) return true;
        if(C==0 && wewnatrz(x3, y3, x4, y4, x1, y1) == true) return true;
        if(D==0 && wewnatrz(x3, y3, x4, y4, x2, y2) == true) return true;
    }
}
long long silniarek(int n)
{
    if(n <= 1) return 1;
    else return (silniarek(n-1) * n);
}
long long maxsilniarek()
{
    int c = 2;
    while(silniarek(c) < silniarek(c+1)) c++;
    return c;
}
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) 
    {
        int m = l + (r - l) / 2;
        if (arr[m] == x) return m;
        if (arr[m] < x) l = m + 1;
        else r = m - 1;
    }
    return -1;
}
#endif
