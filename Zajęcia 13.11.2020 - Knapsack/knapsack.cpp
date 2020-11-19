#include <iostream>
#include <algorithm>
using namespace std;
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
int main()
{
    int n = 6, v = 15;
    int price[100] = { 6, 4, 5, 7, 10, 2 };
    int weight[100] = { 6, 2, 3, 2, 3, 1 };
    cout << knapsack(price, weight, n, v, false) << endl << knapsack(price, weight, n, v, true);
    return 0;
}
