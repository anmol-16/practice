#include<bits/stdc++.h>
using namespace std;


int strToInt(string s,int n){
    if(n == 0)
        return 0;
    int ans = strToInt(s,n-1);
    return ans*10 + s[n-1] - '0';
}


int main(){
    string s;
    cin>>s;
    int n = s.size();
    int ans = strToInt(s,n);
    cout<<ans;
    return 0;
}