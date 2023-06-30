#include<bits/stdc++.h>
using namespace std;


// 6
// 5 6 1 2 4 0

void merge(int* arr, int s,int e){
    if(s >= e)
    return;
    int i=s;
    vector<int>temp(e+1);
    int mid = (s+ (e-s)/2);
    int j = mid+1;
    int k=s;
    while(i<= mid && j<=e){
        if(arr[i] <= arr[j]){
            temp[k] = arr[i];
            k++;
            i++;
        }
        else{
            temp[k] = arr[j];
            k++;
            j++;
        }
    }
    while(i<=mid){
        temp[k++] = arr[i++];
    }
    while(j<=e){
        temp[k++] = arr[j++];
    }
    for(int l=s;l<=e;l++){
        arr[l] = temp[l];
    }
    return;
}

void mergeSort(int* arr,int s, int e){
    if(s >= e)
        return;
    int mid = s + (e - s)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    
    merge(arr,s,e);

    return;
}

int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}