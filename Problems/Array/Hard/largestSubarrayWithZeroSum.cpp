#include<bits/stdc++.h>
using namespace std;
//the optimal approach is O(nlogn) and space complexity is O(n)
int largestSubarrayWithZeroSumOptimized(vector<int>arr){
    int n=arr.size();
    unordered_map<int,int>mpp;
    int maximum=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum==0){
            maximum=i+1;
            }else{
            if(mpp.find(sum)!=mpp.end()){
            maximum=max(maximum,i-mpp[sum]);
            }else{
            mpp[sum]=i;
            }
        }
    }
    return maximum;
}
//the brute force approach is O(n^2) and space complexity is O(n)
int largestSubarrayWithZeroSumBrute(vector<int>arr){
    int n=arr.size();
    int length=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            if(sum==0){
                length=max(length,j-i+1);
            }
        }
    }
    return length;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int length=largestSubarrayWithZeroSumBrute(arr);
    cout<<length;
    return 0;
}
