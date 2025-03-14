#include<bits/stdc++.h>
using namespace std;
int findKthMissingNumBrute(vector<int>&arr,int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]<=k) k++;
        else break;
    }
    return k;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    int ans=findKthMissingNumBrute(arr,n,k);
    cout<<ans<<endl;
    return 0;
}