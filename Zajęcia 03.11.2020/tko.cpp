#include <bits/stdc++.h>
using namespace std;
void generatematrix(string key, char mat[5][5])
{
    string base = "ABCDEFGHIKLMNOPQRSTUVWXYZ", key2;
    set <char> inp;
    int ite = 0;
    for(int i = 0; i < key.size(); i++)
    {
        key[i] = toupper(key[i]);
        if(key[i] == 'J') key[i] = 'I';
        if(inp.find(key[i]) == inp.end() && key[i] != 32) key2 += key[i];
        if(key[i] != 32) inp.insert(key[i]);
    }
    for(int i = 0; i < 25; i++) if(inp.find(base[i]) == inp.end()) key2 += base[i];
    for(int i = 0; i < 5; i++) 
    {
        for(int j = 0; j < 5; j++)
        {
            mat[i][j] = key2[ite];
            ite++;
        }
    }
}
int main()
{
    char mat[5][5];
    string key;
    getline(cin, key);
    generatematrix(key, mat);
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++) cout << mat[i][j];
        cout << endl;
    }
    return 0;
}
