#include<bits/stdc++.h>
using namespace std;

void allOccurences(int* arr,int n,int key,vector<int>& out,int i){
    if(i >= n)
        return;
    if(arr[i] == key){
        out.push_back(i);
    }
    allOccurences(arr,n,key,out,i+1);
    return;

}

int lastOccurence(int* arr,int n,int key){
    if(n==0)
        return -1;

    int i = lastOccurence(arr+1,n-1,key);
    if(i==-1){
        if(arr[0] == key)
            return 0;
    }
    return i+1;
}

int firstOccurence(int* arr,int n,int key){
    if(n==0){
        return -1;
    }
    if(arr[0] == key){
        return 0;
    }
    int i = firstOccurence(arr+1,n-1,key);
    if(i==-1)
        return -1;
    return i+1;
}

int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    vector<int>out;
    // int fOccurrence = firstOccurence(arr,n,key);
    // int lOccurrence = lastOccurence(arr,n,key);
    // cout<<fOccurrence<<"fOccurrence"<<endl;
    // cout<<lOccurrence<<"lOccurrence"<<endl;

    allOccurences(arr,n,key,out,0);
    for(int i : out){
        cout<<i<<"here is the value"<<endl;
    }
    return 0;
}