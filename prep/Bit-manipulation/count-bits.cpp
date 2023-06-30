#include<bits/stdc++.h>
using namespace std;

int countBits(int n){
    int ans = 0;
    while(n>0){
        ans += (n&1);
        n = n>>1;
    }
    return ans;
}
int countBitsFast(int n){
    int ans  = 0;
    while(n>0){
        //removes the last set bit
        n = n&(n-1);
        ans++;
    }
    return ans;
}

int decimalToBinary(int n){
    
}

int main(){
    cout<<countBits(31)<<endl;
    cout<<countBitsFast(31)<<endl;
    cout<<__builtin_popcount(n)<<endl;
    return 0;
}