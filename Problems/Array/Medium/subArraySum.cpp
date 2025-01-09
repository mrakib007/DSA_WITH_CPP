#include<bits/stdc++.h>
using namespace std;
//Optimized Approach. Time Complexity: O(n), Space Complexity: O(n)
int countSubarraySumOptimized(vector<int>nums,int value){
    map<int,int>mpp;
    int presum=0,count=0;
    mpp[0]=1;
    for(int i=0;i<nums.size();i++){
        presum=presum+nums[i];
        int remove=presum-value;
        count=count+mpp[remove];
        mpp[presum]=mpp[presum]+1;
    }
    return count;
}
//Better Approach. Time Complexity: O(n^2), Space Complexity: O(1)
int countSubarraySumBetter(vector<int>nums,int value){
    int n=nums.size();
    int count=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+nums[j];
            if(sum==value){
                count++;
            }
        }
    }
    return count;
}
//Brute Force Approach. Time Complexity: O(n^3), Space Complexity: O(1)
int countSubarraySumBrute(vector<int>nums,int value){
    int n=nums.size();
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum=sum+nums[k];
                if(sum==value){
                    count++;
                }
            }
        }
    }
    return count;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int answer=countSubarraySumBrute(nums,k);
    cout<<answer;
    return 0;
}
