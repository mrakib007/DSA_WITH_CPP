#include<bits/stdc++.h>
using namespace std;
//brute force approach. Time complexity is O(n^2) and space complexity is O(1)
vector<int> missingAndRepeatingBrute(vector<int>&nums,int n){
    int repeating=-1,missing=-1;
    for(int i=1;i<=n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(nums[j]==i) count++;
        }
        if (count==2) repeating=i;
        if (count == 0)missing=i;
        if (missing!=-1 && repeating!=-1) break;
    }
    return {repeating,missing};
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    vector<int>answer=missingAndRepeatingBrute(nums,n);
    return 0;
}