//This problem is just the same ase Book allocation problem,Painters partition and splitArray 
#include<bits/stdc++.h>
using namespace std;
int countDays(vector<int>arr,int days)
{
    int workers=1;
    long long daysWorker=0;
    for(int i=0;i<arr.size();i++){
        if(daysWorker+arr[i]<=days){
            daysWorker+=arr[i];
        }else{
            workers++;
            daysWorker=arr[i];
        }
    }
    return workers;
}
//Optimized approach using binary search
//Time complexity : O(nlog(sum-max+1))
//Space complexity : O(1)
int findNum(vector<int>nums,int n,int k){
    if(k>n) return -1;
    int low=*max_element(nums.begin(),nums.end());
    int high=accumulate(nums.begin(),nums.end(),0);
    while(low<=high){
        int mid=(low+high)/2;
        int days=countDays(nums,mid);
        if(days>k){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return low;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int ans=findNum(arr,n,k);
    cout<<ans<<endl;
    return 0;
}