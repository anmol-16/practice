#include<bits/stdc++.h>
using namespace std;

char words[][11] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void print(int n){
    if(n == 0){
        return;
    }
    print(n/10);
    int digit = (n%10);
    cout<<words[digit]<<" ";
    return;
}


int main(){
    int n;
    cin>>n;
    print(n);

    return 0;
}