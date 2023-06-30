#include<iostream>

using namespace std;

bool binarySearch(int*arr,int target,int size,int &index){
    int s = 0;
    int e = size - 1;

    while(s < e){
        int mid = s + (e - s) / 2;
        if(arr[mid] == target){
            index = mid;
            return true;
        }
        else if(arr[mid] > target){
            e = mid - 1;
        }
        else {
            s = mid + 1;
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
    int index;
    bool ans = binarySearch(arr,target,size,index);
    if(ans){
        cout<<"element present"<<index;
    }

    return 0;
}