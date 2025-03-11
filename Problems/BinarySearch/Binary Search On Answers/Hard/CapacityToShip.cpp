#include<bits/stdc++.h>
using namespace std;
int sumOfWeightArray(vector<int>&arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int daysRequired(vector<int>&weightArray,int capacity,int n){
    int day=1,load=0;
    for(int i=0;i<n;i++){
        if(load+weightArray[i]>capacity){
            load=weightArray[i];
            day++;
        }else{
            load=load+weightArray[i];
        }
    }
    return day;
}
//Optimized approach using binary search on answers
//Time complexity is O(nlog(max(arr))), Space complexity is O(1)
int capacityToShipOptimized(vector<int>&arr,int n,int days){
    int high=sumOfWeightArray(arr,n);
    int low=*max_element(arr.begin(),arr.end());
    while(low<=high){
        int mid=(low+high)/2;
        int requiredDays=daysRequired(arr,mid,n);
        if(requiredDays<=days) high=mid-1;
        else low=mid+1;
    }
    return low;
}
//Brute force approach.
//Time complexity is O(sum-max+1)*n
//Space complexity is O(1)
int capacityToShipBrute(vector<int>&arr,int n,int days){
    int maxOfWeight=*max_element(arr.begin(),arr.end());
    int sumOfWeight=sumOfWeightArray(arr,n);
    for(int i=maxOfWeight;i<=sumOfWeight;i++){
        int requiredDays=daysRequired(arr,i,n);
        if(requiredDays<=days) return i;
    }
    return sumOfWeight;
}
int main(){
    int n,days;
    cin>>n>>days;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int ans=capacityToShipBrute(arr,n,days);
    cout<<ans<<endl;
    return 0;
}