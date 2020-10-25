#include <bits/stdc++.h>
using namespace std;
void bubblesort(int p, int k, int *t)
{
    int c = 1;
    while(c != 0)
    {
        c = 0;
        for(int i = k; i > p; i--)
        {
            if(t[i] < t[i-1])
            {
                swap (t[i], t[i-1]);
                c++;
            }
        }
    }
}
void selectionsort(int p, int k, int *t)
{
    for(int i = p; i < k; i++) if(*min_element(t+i+1, t+k) < t[i]) swap(t[i], *min_element(t+i+1, t+k));
}
void insertionsort(int p, int k, int *t)
{
    int j, w;
    for(int i = 1; i < k; i++)
    {
        w = t[i];
        j = i - 1;
        while(j >= 0 && t[j] > w)
        {
            t[j+1] = t[j];
            j--;
        }
        t[j+1] = w;
    }
}
void merge(int l, int m, int r, int *t) 
{
    int i, j, h[r-l+5];
    for(i = m + 1; i > l; i--) h[i-1] = t[i-1];
    for(j = m; j < r; j++) h[r+m-j] = t[j+1]; 
    for(int k = l; k <= r; k++)
    {
        if(h[j] < h[i]) t[k] = h[j--];
        else t[k] = h[i++];
    }
}
void mergesort(int p, int k, int *t)
{
	if(p < k)
    { 
	    int s = (k + p) / 2;
	    mergesort(p, s, t); 
	    mergesort(s + 1, k, t);
	    merge(p, s, k, t);
    }
}
void quicksort(int p, int k, int *t)
{
    int i = p, j = k, x = t[(p+k)/2];
    while(i < j)
    {
        while(t[i] < x) i++;
        while(t[j] > x) j--;
        if(i <= j)
        {
            swap(t[i], t[j]);
            i++;
            j--;
        }
    }
    if(p < j) quicksort(p, j, t);
    if(k > i) quicksort(i, k, t);
}
int main()
{
    int t[10] = {683, 29, 138, 5672, 12, 572, 680, 9, 2, 6789};
    int p = 1, k = 10;
    // bubblesort(p-1, k-1, t);
    // selectionsort(p-1, k-1, t);
    // insertionsort(p-1, k-1, t);
    // mergesort(p-1, k-1, t);
    quicksort(p-1, k-1, t);
    for(int i = p-1; i < k; i++) cout << t[i] << " ";
    return 0;
}
