#include<bits/stdc++.h>
using namespace std;
//Optimized approach. Time complexity is O(n) and space complexity is O(1)
vector<int> missingAndRepeatingOptimized(vector<int>& arr) {
        long long n=arr.size();
        long long SN=(n*(n+1))/2;
        long long S2N=(n*(n+1)*(2*n+1))/6;
        long long S1=0,S2=0;
        for(int i=0;i<n;i++){
            S1=S1+arr[i];
            S2=S2+(long long)arr[i]*(long long)arr[i];
        }
        long long val1=S1-SN;
        long long val2=S2-S2N;
        val2=val2/val1;
        long long x=(val1+val2)/2;
        long long y=x-val1;
        return {(int)x,(int)y};
    }
//Better approach. Time complexity is O(2n) and space complexity is O(n)
vector<int> missingAndRepeatingBetter(vector<int>& arr) {
        int n=arr.size();
        int hashArray[n+1]={0};
        int repeating=-1,missing=-1;
        for(int i=0;i<n;i++){
            hashArray[arr[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(hashArray[i]>1){
                repeating=i;
            }else if(hashArray[i]==0){
                missing=i;
            }
            if(missing!=-1&&repeating!=-1) break;
        }
        return {repeating,missing};
    }
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