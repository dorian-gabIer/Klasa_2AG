#include <bits/stdc++.h>
using namespace std;
struct point
{
    int x;
    int y;
};
void generatematrix(string key, char mat[5][5])
{
    string base = "ABCDEFGHIKLMNOPQRSTUVWXYZ", key2;
    set <char> inp;
    int ite = 0;
    for (int i = 0; i < key.size(); i++)
    {
        key[i] = toupper(key[i]);
        if (key[i] == 'J') key[i] = 'I';
        if (inp.find(key[i]) == inp.end() && key[i] != 32 && key[i] >= 'A' && key[i] <= 'Z') key2 += key[i];
        if (key[i] != 32 && key[i] >= 'A' && key[i] <= 'Z') inp.insert(key[i]);
    }
    for (int i = 0; i < 25; i++) if (inp.find(base[i]) == inp.end()) key2 += base[i];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            mat[i][j] = key2[ite];
            ite++;
        }
    }
}
point* findpoint(char c, char mat[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (mat[j][i] == c)
            {
                point* cords = new point;
                cords->x = i;
                cords->y = j;
                return cords;
            }
        }
    }
    return nullptr;
}
string playfair(string text, char mat[5][5])
{
    string text2, res;
    for (int i = 0; i < text.size(); i++)
    {
        text[i] = toupper(text[i]);
        if (text[i] == 'J') text[i] = 'I';
        if (text[i] != 32 && text[i] >= 'A' && text[i] <= 'Z') text2 += text[i];
    }
    if (text2.size() % 2 != 0) text2 += 'X';
    for (int i = 0; i < text2.size(); i += 2)
    {
        int x1, x2, y1, y2;
        x1 = findpoint(text2[i], mat)->x;
        x2 = findpoint(text2[i + 1], mat)->x;
        y1 = findpoint(text2[i], mat)->y;
        y2 = findpoint(text2[i + 1], mat)->y;
        if(x1 == x2 && y1 == y2) // same letter
        {
            res += mat[y1][x1];
            res += mat[y2][x2];
        }
        else if (x1 == x2) // same column
        {
            // I: going down
            res += mat[(y1+1) % 5][x1];
            res += mat[(y2+1) % 5][x2];
        }
        else if (y1 == y2) // same row
        {
            // II: going right
            res += mat[y1][(x1+1) % 5];
            res += mat[y2][(x2+1) %5];
        }
        else //intersection of y1 with x2 and intersection of y2 with x1
        {
            // III: swaping cords of diagonals
            res += mat[y1][x2];
            res += mat[y2][x1];
        }
    }
    return res;
}
int main()
{
    char mat[5][5];
    string key, text, res;
    getline(cin, key);
    getline(cin, text);
    generatematrix(key, mat);
    cout << playfair(text, mat);
    return 0;
}
