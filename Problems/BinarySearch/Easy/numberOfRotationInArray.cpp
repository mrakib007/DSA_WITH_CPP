#include<bits/stdc++.h>
using namespace std;
int findNumberOfRotationInArray(vector<int>arr,int n){
    int ans=INT_MAX;
    int low=0,high=n-1,index=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[low]<=arr[mid]){
            if(ans>arr[low]){
                index=low;
                ans=arr[low];
            }
            low=mid+1;
        }else{
            if(arr[mid]<ans){
                index=mid;
                ans=arr[mid];
            }
            high=mid-1;
        }
    }
    return index;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int answer=findNumberOfRotationInArray(arr,n);
    cout<<answer<<endl;
    return 0;
}