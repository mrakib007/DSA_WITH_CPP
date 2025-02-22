#include<bits/stdc++.h>
using namespace std;
int findCeiling(vector<int>&arr,int n,int x){
    int low=0,high=n-1;
    int index=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=x){
            high=mid-1;
            index=arr[mid];
        }else{
            low=mid+1;
        }
    }
    return index;
}
int findFloor(vector<int>&arr,int n,int x){
    int low=0,high=n-1;
    int index=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]<=x){
            low=mid+1;
            index=arr[mid];
        }else{
            high=mid-1;
        }
    }
    return index;
}
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int index=findFloor(arr,n,x);
    cout<<index<<endl;
    return 0;
}