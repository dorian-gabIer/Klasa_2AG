#include <iostream>
#include <vector>
using namespace std;
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
int main()
{
    int V, E, a, b;
    bool cons = true;
    cin >> V >> E;
    vector <graph> vec(V);
    for (int i = 0; i < E; i++) 
    {
        cin >> a >> b;
        --a; --b;
        vec[a].nast.push_back(b);
        vec[b].nast.push_back(a);
    }
    dfs(vec, 0);
    for (int i = 0; i < V; i++) if (!vec[i].odw) cons = false;
    if (cons) cout << "TAK";
    else cout << "NIE";
    return 0;
}
