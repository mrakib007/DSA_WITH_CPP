#include<bits/stdc++.h>
using namespace std;
//The optimal approach is O(n) and space complexity is O(n)
int subArrayWithXOROptimized(vector<int>&arr,int k){
    int xr=0;
    map<int,int>mpp;
    mpp[xr]++;
    int count=0;
    for(int i=0;i<arr.size();i++){
        xr=xr^arr[i];
        int x=xr^k;
        count=count+mpp[x];
        mpp[xr]++;
    }
    return count;
}
//The optimal approach is O(n^2) and space complexity is O(1)
int subArrayWithXORBetter(vector<int>&arr,int k){
    int n=arr.size();
    int count=0;
    for(int i=0;i<n;i++){
        int XOR=0;
        for(int j=i;j<n;j++){
            XOR=XOR^arr[j];
            if(XOR==k){
                count++;
            }
        }
    }
    return count;
}
//The brute force approach is O(n^3) and space complexity is O(1)
int subArrayWithXORBrute(vector<int>&arr,int k){
    int n=arr.size();
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int XOR=0;
            for(int k=i;k<=j;k++){
                XOR=XOR^arr[k];
                if(XOR==k){
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
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int count=subArrayWithXORBrute(arr,k);
    cout << count;
    return 0;
}