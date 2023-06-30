#include<bits/stdc++.h>

using namespace std;

int generatingSub(int*arr,int size,vector<int>&sumArr){
    int maxiSum = INT_MIN;
    int currentSum;
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            currentSum = 0;
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
                currentSum += arr[k];
            }
        // sumArr.push_back(sum);
        maxiSum = max(maxiSum,currentSum);
        cout<<endl;
        }
    }
    return maxiSum;
}

int main(){
    int size;
    cin>>size;
    int *arr = new int[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    vector<int>sumArr;
    int ans = generatingSub(arr,size,sumArr);
    int maxi = INT_MIN;
    for(int i=0;i<sumArr.size();i++){
        maxi = max(maxi,sumArr[i]);
    }
    cout<<ans<<" maxi value"<<endl;
    return 0;
}