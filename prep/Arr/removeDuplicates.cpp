#include<bits/stdc++.h>
using namespace std;

void removeDuplicates(char *arr,int size){
    
    int prev = 0;
    for(int i=1;i<size;i++){
        if(arr[prev]!=arr[i]){
            prev++;
            arr[prev] = arr[i];
        }
    }
    return;
}

void removeDup(char*arr,int size){
    if(size == 1 || size == 0){
        return;
    }
    int prev = 0;
    for(int current = 1; current < size; current++){
        if(arr[prev] != arr[current]){
            prev++;
            arr[prev] = arr[current];
        }
    }
    return;
}

int main(){

    char arr[] = {'c','c','c','o','o','o','o','d','d','d','i','n','g','\0'};
    int size = sizeof(arr);
    removeDup(arr,size);
    cout<<arr<<endl;
    return 0;
}