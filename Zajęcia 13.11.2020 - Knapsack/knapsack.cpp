#include <bits/stdc++.h>
using namespace std;
int knapsack(int *priceold, int *weightold, int n, int v, bool elim)
{
    int price[100], weight[n], totalweight = 0, max1, max2, worth = 0;
    double max;
    for(int i = 0; i < n; i++)
    {
        max1 = -1, max2 = -1, max = -1;
        for(int j = i; j < n; j++) if(priceold[j]/double(weightold[j]) > max) max = priceold[j]/weightold[j], max1 = priceold[j], max2 = weightold[j];
        price[i] = max1;
        weight[i] = max2;
    }
    // dla elim: algorytm decyzyjny
    // dla !elim: algorytm ogolny
    if(!elim) for(int i = 0; i < n; i++) while(totalweight + weight[i] <= v) worth += price[i], totalweight += weight[i];
    else for(int i = 0; i < n; i++) if(totalweight + weight[i] <= v) worth += price[i], totalweight += weight[i];
    return worth;
}
int main()
{
    int n = 6, v = 15;
    int price[100] = {6, 4, 5, 7, 10, 2};
    int weight[100] = {6, 2, 3, 2, 3, 1};
    cout << knapsack(price, weight, n, v, false) << endl << knapsack(price, weight, n, v, true);
    return 0;
}
