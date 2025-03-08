#include<bits/stdc++.h>
using namespace std;
int findMaxElement(vector<int> arr,int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
    }
    return max;
}
int findDivisor(vector<int> arr,int n,int d){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+(ceil((double)arr[i]/d));
    }
    return sum;
}
//Optimized approach with binary search
//Time complexity is O(nlog(max(arr))), Space complexity is O(1)
int findSmallestDivisorOptimized(vector<int>arr,int n, int threshold){
    if(n>threshold) return -1;
    int low=1,high=findMaxElement(arr,n);
    while(low<=high){
        int mid=(low+high)/2;
        if(findDivisor(arr,n,mid)<=threshold) high=mid-1;
        else low=mid+1;
    }
    return low;
}
int findSmallestDivisorBrute(vector<int> arr,int n,int threshold){
    for(int d=1;d<=findMaxElement(arr,n);d++){
        if(findDivisor(arr,n,d)<=threshold) return d;
    }
    return -1;
}
int main(){
    int n,threshold;
    cin>>n>>threshold;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int ans=findSmallestDivisorBrute(arr,n,threshold);
    cout<<ans<<endl;
    return 0;
}