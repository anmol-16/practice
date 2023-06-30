#include <iostream>
#include<climits>
using namespace std;

bool linearSearch(int*arr,int target,int size){
    if(size == 0)
        return false;
    for(int i=0;i<size;i++){
        if(arr[i] == target){
            return true;
        }
    }
    return false;
}

int main(){
    int size;
    cin>>size;
    int *arr = new int[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    bool ans = linearSearch(arr,target,size);
    cout<<ans<<endl;
    return 0;
}