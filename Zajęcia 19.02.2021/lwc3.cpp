#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int f, y;
    cin >> f;
    unordered_map <int, int> mapa;
    for (int i = 1; i < 1000; i++) 
    {
        cin >> y;
        mapa[abs(f - y)]++;
        f = y;
    }
    vector <pair<int, int>> v(mapa.begin(), mapa.end());
    sort(v.begin(), v.end(), [](const auto& l, const auto& r) 
    {
        if (l.second == r.second) return l.first > r.first;
        return l.second > r.second;
    });
    cout << v[0].second << endl;
    for (auto& elem : v)
    {
        if (elem.second != v[0].second) break;
        cout << elem.first << endl;
    }
    return 0;
}
