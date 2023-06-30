#include<bits/stdc++.h>
using namespace std;

bool canPlace(vector<vector<int>> input, int i, int j, int n) {
    //column
    for(int k = 0; k < i; k++) {
        if(input[k][j] == 1) {
            return false;
        }
    }
    //right diagonal
    int x = i;
    int y = j;
    while(x >=0 && y >=0 ) {
        if(input[x][y] == 1){
            return false;
        }
        x--;
        y--;
    }
    x = i;
    y = j;
    while(x >= 0 && y < n) {
        if(input[x][y] == 1)
            return false;
        x--;
        y++;
    }
    return true;
}

int  NQueen(int n, vector<vector<int>> input, int i) {
    if(i == n) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                cout<<input[j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return 1;
    }

    int ways = 0;
    for(int j = 0; j < n; j++) {
        if(canPlace(input, i, j, n)) {
            input[i][j] = 1;
            ways += NQueen(n, input, i + 1);
            input[i][j] = 0;
        }
    }
    return ways;
}

int main() {
    int n;
    cin>>n;
    int count = 0;
    vector<vector<int>> input(n, vector<int>(n, 0));
    int  ans = NQueen(n, input, 0);
    if(ans) cout<<ans;
    return 0;
}