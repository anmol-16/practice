#include<bits/stdc++.h>
using namespace std;

int profitVector(int n,int c, vector<int>wt, vector<int>prices, vector<int>&dp){
    if(n == 0 || c == 0){
        return 0;
    }
    if(dp[n]!=0){
        return dp[n];
    }
    int inc, exc;
    inc = exc = INT_MIN;

    if(c >= wt[n-1]){
        inc = prices[n-1] + profitVector(n-1,c-wt[n-1],wt,prices,dp);
    }
    exc = profitVector(n-1,c,wt,prices,dp);

    return dp[n] = max(inc,exc);
}

int profit(int N, int C, int* wt, int* prices){
    if(N == 0 || C == 0)
        return 0;
    int inc,exc;
    inc = exc = INT_MIN;
    if(C >= wt[N-1]){
        inc = prices[N-1] + profit(N-1, C - wt[N-1], wt, prices);
    }
    exc = profit(N-1,C, wt, prices);

    return max(inc,exc);
}

int main(){
    // int n = 4;
    // // cin>>n;
    // int wt[]= {1,2,3,5};
    // int prices[] = {40,20,30,100};
    // int ans = profit(4,7,wt,prices);
    vector<int>wt = {1,2,3,5};
    vector<int>prices = {40,20,30,100};
    vector<int> dp(5,0);
    int ans = profitVector(4,7,wt,prices,dp);
    for(int i=0;i<5;i++){
        cout<<dp[i] << " ";
    }
    cout<<endl;
    cout<<ans;
    return 0; 
}