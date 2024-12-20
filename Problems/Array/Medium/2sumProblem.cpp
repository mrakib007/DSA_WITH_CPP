#include<bits/stdc++.h>
using namespace std;
//Two Pointers Approach
string twoSumTwoPointer(vector<int>& nums,int target){
    int n=nums.size();
    int left=0,right=n-1;
    sort(nums.begin(),nums.end());
    while(right>left){
        int sum=nums[left]+nums[right];
        if(sum==target){
            return "YES";
        }else if(sum<target){
            right--;
        }else{
            left++;
        }
    }
    return "NO";
}
//Better And Optimal Approach
vector<int>twoSumBetterApproach(vector<int>& nums,int target){
    int n=nums.size();
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        int num=nums[i];
        int rem=target-num;
        if(mpp.find(rem)!=mpp.end()){
            return {mpp[rem],i};
        }
        mpp[num]=i;
    }
    return {};
}
//Brute Force Approach
vector<int>twoSum(vector<int>& nums,int target){
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(i=j) continue;
            if(nums[i]+nums[j]==target){
                return {i,j};
            }
        }
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int target;
    cin >> target;
    vector<int> result = twoSum(arr,target);
    if(!result.empty()){
        cout<<result[0]<< " "<<result[1]<<endl;
    }else{
        cout<<"No such pair found"<<endl;
    }
    return 0;
}
//For Brute Force the time complexity is O(n^2) and space complexity is O(1)
//For Better Approach the time complexity is O(n) and space complexity is O(n)
//For Two Pointer Approach the time complexity is O(nlogn) and space complexity is O(1)