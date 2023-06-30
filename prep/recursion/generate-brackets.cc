#include<bits/stdc++.h>
using namespace std;

void brackets(int n, string output, int idx, int open, int close) {
    if(idx == 2*n){
        cout<<output<<endl;
        return;
    }
    if(open < n){
        brackets(n, output + '(', idx+1, open+1, close);
    }
    if(close < open){
        brackets(n, output + ')', idx+1, open, close+1);
    }
    return;
}
 
int main(){
    int n;
    cin>>n;
    string output = "";
    brackets(n, output, 0, 0, 0);
    return 0;
}

