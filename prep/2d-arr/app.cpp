#include<bits/stdc++.h>
using namespace std;
    int count(vector<vector<int>>& board, int r, int c){
        int count = 0;
         for(int i=r-1;i<r+2;i++){
            for(int j=c-1;j<c+2;j++){
                if( (i == r and j == c) || i < 0 || j < 0 || i >= board.size() || j >=                            board[0].size()) continue;
                else if(board[i][j] == 1)
                    count++;
            }
        }
        return count;
    }
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> ans(board.size(),vector<int>(board[0].size()));
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                int neighbour = count(board,i,j);
                if(board[i][j] == 1){
                    if(neighbour < 2)
                        ans[i][j] = 0;
                    else if(neighbour == 2 || neighbour == 3)
                        ans[i][j] = 1;
                    else if(neighbour > 3)
                        ans[i][j] = 0;
                }
                else{
                    if(neighbour == 3)
                        ans[i][j] = 1;
                }
            }
        }
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                cout<<ans[i][j]<<"i";
                board[i][j] = ans[i][j];
            }
            cout<<endl;
        }
        return;
    }

    int main(){
        int m,n;
        cin>>m>>n;
        vector<vector<int>> board(m, vector<int>(n));

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>board[i][j];
            }
        }
        gameOfLife(board);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }

    }