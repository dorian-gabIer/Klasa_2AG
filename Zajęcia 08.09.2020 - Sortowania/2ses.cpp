#include <iostream>
using namespace std;
void sortowanie(int a[], int N)  
{  
    int minpos;  
    for (int i = 0; i < N-1; i++)  
    {  
        minpos = i;  
        for (int k = i+1; k < N; k++) if (a[k] < a[minpos]) minpos = k;
        int temp = a[minpos];  
        a[minpos] = a[i];  
        a[i] = temp;
        for (int j = 0; j < N; j++) cout << a[j] << " ";
        cout << endl;
    }
}
int main()
{
    int a[1000], N;
    cin >> N;
    for(int i = 0; i < N; i++) cin >> a[i];
    sortowanie(a, N);
    return 0;  
}