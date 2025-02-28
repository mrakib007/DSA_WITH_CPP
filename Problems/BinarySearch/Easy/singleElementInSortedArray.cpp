#include<bits/stdc++.h>
using namespace std;
//Brute Force Solution
//Time complexity=O(n), Space complexity=O(1)
int findSingleElementBrute(vector<int>arr,int n){
    if(n==1) return arr[0];
    for(int i=0;i<n;i++){
        if(i==0){
            if(arr[i]!=arr[i+1]) return arr[i];
        }
        if(i==n-1){
            if(arr[i]!=arr[i-1]) return arr[i];
        }else{
            if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1]) return arr[i]; 
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int ans=findSingleElementBrute(arr,n);
    cout<<ans<<endl;
    return 0;
}