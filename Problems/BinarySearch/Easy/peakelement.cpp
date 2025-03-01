#include<bits/stdc++.h>
using namespace std;
//Optimized solution
//Time complexity: O(logn)
//Space complexity: O(1)
int findPeakOptimized(vector<int>arr,int n){
    if(n==1) return arr[0];
    if(arr[n-1]>arr[n-2]) return arr[n-1];
    if(arr[0]>arr[1]) return arr[0];
    int low=1,high=n-2;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) return arr[mid];
        else if(arr[mid]>arr[mid-1]) low=mid+1;
        else high=mid-1;
    }
    return -1;
}
//Brute force solution
//Time complexity: O(n)
//Space complexity: O(1)
int findPeakBrute(vector<int>arr,int n){
    for(int i=0;i<n;i++){
        if((i==0||arr[i-1]<arr[i]) && (i==n-1||arr[i]>arr[i+1])) return arr[i];
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int anss=findPeakBrute(arr,n);
    cout<<anss<<endl;
    return 0;
}