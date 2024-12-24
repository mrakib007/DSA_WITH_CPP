#include<bits/stdc++.h>
#include <climits>
using namespace std;
//Time Complexity : O(n^2)
//Space Complexity : O(1)
int maximumSubarraySum(vector<int>arr){
    int n=arr.size();
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            maxSum=max(maxSum,sum);
        }
    }
    return maxSum;
}
//Time Complexity : O(n)
//Space Complexity : O(1)
int maximumSubArrayUsingKadane(vector<int>& nums){
    int sum=0;
    int maxSum=INT_MIN;
    int start = 0,temp_start=0,end=0;
    for(int i=0;i<nums.size();i++){
        if(sum==0) temp_start=i;
        sum=sum+nums[i];
        if(sum>maxSum){
            maxSum=sum;
            start=temp_start;
            end=i;
        }
        if(sum<0) sum=0;
    }
    return maxSum;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>> arr[i];
    int maxSum = maximumSubarraySum(arr);
    cout<<maxSum<<endl;
    return 0;
}