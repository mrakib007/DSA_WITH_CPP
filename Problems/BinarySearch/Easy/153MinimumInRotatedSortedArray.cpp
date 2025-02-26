#include<bits/stdc++.h>
using namespace std;
//Time complexity=O(logn), Space complexity=O(1)
int minimumInRotatedArray(vector<int> arr,int n){
    int low=0,high=n-1,ans=INT_MAX;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[low]<=arr[mid]){
            ans=min(ans,arr[low]);
            low=mid+1;
        }else{
            ans=min(ans,arr[mid]);
            high=mid-1;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int ans=minimumInRotatedArray(arr,n);
    cout<<ans<<endl;
    return 0;
}