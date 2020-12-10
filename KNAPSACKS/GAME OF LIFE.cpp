#include <iostream>
#include <windows.h>
using namespace std;
#define ROZ 20
#define N 50
void neighbours(bool mat[ROZ][ROZ], int i, int j, int neigh[ROZ][ROZ])
{
    int c = 0;
    // row up
    if (i - 1 >= 0 && j - 1 >= 0) if (mat[i - 1][j - 1] == 1) c++;
    if (i - 1 >= 0) if (mat[i - 1][j] == 1) c++;
    if (i - 1 >= 0 && j + 1 < ROZ) if (mat[i - 1][j + 1] == 1) c++;
    // current row
    if(j-1 >= 0) if (mat[i][j - 1] == 1) c++;
    if (j + 1 < ROZ) if (mat[i][j + 1] == 1) c++;
    // row down
    if (i + 1 < ROZ && j - 1 >= 0) if (mat[i + 1][j - 1] == 1) c++;
    if (i + 1 < ROZ) if (mat[i + 1][j] == 1) c++;
    if (i + 1 < ROZ && j + 1 < ROZ) if (mat[i + 1][j + 1] == 1) c++;
    neigh[i][j] = c;
}
void make(bool mat[ROZ][ROZ])
{
    int neigh[ROZ][ROZ] = {};
    for (int i = 0; i < ROZ; i++) for (int j = 0; j < ROZ; j++) neighbours(mat, i, j, neigh);
    for (int i = 0; i < ROZ; i++)
    {
        for (int j = 0; j < ROZ; j++)
        {
            if (neigh[i][j] == 3) mat[i][j] = 1;
            else if (neigh[i][j] != 2 && neigh[i][j] != 3) mat[i][j] = 0;
        }
    }
}
void show(bool mat[ROZ][ROZ])
{
    Sleep(50);
    system("cls");
    for (int i = 0; i < ROZ; i++)
    {
        for (int j = 0; j < ROZ; j++) cout << (mat[i][j] ? '#' : ' ') << " ";
        cout << endl;
    }
}
void init(bool mat[ROZ][ROZ])
{
    mat[9][10] = 1;
    mat[13][10] = 1;
    
    mat[9][8] = 1;
    mat[10][8] = 1;
    mat[11][8] = 1;
    mat[12][8] = 1;
    mat[13][8] = 1;

    mat[9][12] = 1;
    mat[10][12] = 1;
    mat[11][12] = 1;
    mat[12][12] = 1;
    mat[13][12] = 1;
}
void init2(bool mat[ROZ][ROZ])
{
    mat[3][3] = 1;
    mat[4][4] = 1;
    mat[5][2] = 1;
    mat[5][3] = 1;
    mat[5][4] = 1;
}
int main()
{
    system("color 0a");
    bool mat[ROZ][ROZ] = {};
    init(mat); // exploder
    // init2(mat); // glider
    for(int i = 0; i < N; i++)
    {
        show(mat);
        make(mat);
    }
    return 0;
}
