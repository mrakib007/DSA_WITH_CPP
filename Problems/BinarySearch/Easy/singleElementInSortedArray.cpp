#include<bits/stdc++.h>
using namespace std;
//Optimized Solution
//Time complexity=O(logn), Space complexity=O(1)
int findSingleElementOptimized(vector<int>arr,int n){
    if(n==1) return arr[0];
    if(arr[n-1]!=arr[n-2]) return arr[n-1];
    int low=1,high=n-2;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]) return arr[mid];
        if(mid%2==1 && arr[mid]==arr[mid-1] || mid%2==0 && arr[mid]==arr[mid+1]){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return -1;
}
//Brute Force Solution
//Time complexity=O(n), Space complexity=O(1)
int findSingleElementBrute(vector<int>arr,int n){
    if(n==1) return arr[0];
    for(int i=0;i<n;i++){
        if(i==0){
            if(arr[i]!=arr[i+1]) return arr[i];
        }
        if(i==n-1){
            if(arr[i]!=arr[i-1]) return arr[i];
        }else{
            if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1]) return arr[i]; 
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int ans=findSingleElementBrute(arr,n);
    cout<<ans<<endl;
    return 0;
}