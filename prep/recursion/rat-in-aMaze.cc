#include<bits/stdc++.h>
using namespace std;

bool ratInMaze(char maze[][10], int sol[][10], int m, int n, int i, int j) {
    if(i == m && i == n) {
        sol[m][n] = 1;

        //print our solution
        for(int k=0;k<=m;k++){
            for(int l=0;l<=n;l++){
                cout<<sol[k][l]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return true;
    }

    if(maze[i][j] == 'X'){
        return false;
    }
    if(i > m || j > n){
        return false;
    }

    sol[i][j] = 1;

    bool righAns = ratInMaze(maze, sol, m, n, i, j + 1);
    bool leftAns = ratInMaze(maze, sol, m, n, i + 1, j);

    sol[i][j] = 0;

    if(righAns || leftAns)
        return true;
    return false;

}

int main() {
    char maze [10][10] = {
        "0000",
        "00X0",
        "000X",
        "0X00"
    };
    int sol[10][10] = {0};
    int m = 4;
    int n = 4;
    bool ans = ratInMaze(maze, sol, m -1, n -1, 0, 0);
    if(!ans) {
        cout<<"No ans is there"<<endl;
    }
    return 0;

}