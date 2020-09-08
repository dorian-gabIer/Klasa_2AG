#include <iostream>
using namespace std;
int sortowanie(int a[], int N)  
{  
    int minpos, c = 0;  
    for (int i = 0; i < N-1; i++)  
    {  
        minpos = i;  
        for (int k = i+1; k < N; k++) if (a[k] < a[minpos]) minpos = k;
        int temp = a[minpos];  
        a[minpos] = a[i];  
        a[i] = temp;
        if(minpos == i) c++;
    }
    return c;
}
int main()
{
    int a[1000], N;
    cin >> N;
    for(int i = 0; i < N; i++) cin >> a[i];
    cout << sortowanie(a, N);
    return 0;  
}