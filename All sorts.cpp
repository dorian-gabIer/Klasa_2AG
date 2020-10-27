#include <bits/stdc++.h>
using namespace std;
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
int main()
{
    srand(time(0));
    int t[100000];
    int p = 1, k = 100000;
    for (int i = p - 1; i < k; i++) t[i] = rand();
    cout << "Sorting..." << endl;
    cout << "QuickSort: " << timecomp('q', t, p, k) << "s" << endl;
    cout << "Sorting..." << endl;
    cout << "MergeSort: " << timecomp('m', t, p, k) << "s" << endl;
    cout << "Sorting..." << endl;
    cout << "InsertionSort: " << timecomp('i', t, p, k) << "s" << endl;
    cout << "Sorting..." << endl;
    cout << "SelectionSort: " << timecomp('s', t, p, k) << "s" << endl;
    cout << "Sorting..." << endl;
    cout << "BubbleSort: " << timecomp('b', t, p, k) << "s" << endl;
    return 0;
}
