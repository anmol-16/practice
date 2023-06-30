#include <bits/stdc++.h>
using namespace std;

 void merge(int* a, int s, int e) {
        int mid = (s+e)/2;
        int left = s;
        int right = mid + 1;
        vector<int> ans(e+1);
        int k = 0;
        while(left <= mid && right <= e) {
            if(a[left] <= a[right]) {
                ans[k++] = a[left++];
            }
            else {
                ans[k++]= a[right];
                right++;
            }
        }
        while(left <= mid) {
            ans[k++] = a[left++];
        }
        while(right <= e) {
            ans[k++] = a[right++];
        }
        for(int l = s; l<=e; l++) {
            a[l] = ans[l];
        }
        return;
    }
    void mergeSort(int* arr, int s, int e) {
        if(s >= e)
            return;
        int mid = (s+e)/2;
        mergeSort(arr,s, mid);
        mergeSort(arr, mid + 1, e);
        
        merge(arr, s, e);
        
        return;
    }
int main() {
    int arr[5] = {6,5,3,2,2};
    mergeSort(arr, 0, 4);
    for(int i=0;i<5;i++) {
        cout<<arr[i] << " ";
    }
    return 0;
}
