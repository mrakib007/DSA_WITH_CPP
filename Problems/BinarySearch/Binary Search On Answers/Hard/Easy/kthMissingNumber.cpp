#include<bits/stdc++.h>
using namespace std;
//Optimized approach with binary search
//Time Complexity : O(logn).
//Space Complexity : O(1).
int findKthMissingOptimized(vector<int>&arr,int n,int k){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        int missing=arr[mid]-(mid+1);
        if(missing<k) low=mid+1;
        else high=mid-1;
    }
    return k+high+1;
}
//Brute force approach
//Time Complexity : O(n).
//Space Complexity : O(1).
int findKthMissingNumBrute(vector<int>&arr,int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]<=k) k++;
        else break;
    }
    return k;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    int ans=findKthMissingNumBrute(arr,n,k);
    cout<<ans<<endl;
    return 0;
}