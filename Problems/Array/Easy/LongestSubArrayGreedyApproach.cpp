#include<bits/stdc++.h>
using namespace std;
int longestSubArrayWithSumK(vector<int>arr,long long k){
    int left=0,right=0;
    long long sum=arr[0];
    int maxLength=0;
    while(right<arr.size()){
        while(sum>k && left<=right){
            sum=sum-arr[left];
            left++;
        }
        if(sum==k){
            maxLength=max(maxLength,right-left+1);
        }
        right++;
        if(right<arr.size()) sum=sum+arr[right];
    }
    return maxLength;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    long long k;
    cin >> k;
    int maxLength = longestSubArrayWithSumK(arr,k);
    cout << maxLength;
    return 0;
}
// Time Complexity: O(2N)
// Space Complexity: O(1)