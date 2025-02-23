#include<bits/stdc++.h>
using namespace std;
int findFirstElement(vector<int>arr,int n,int x){
    int low=0,high=n-1,first=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            first=mid;
            high=mid-1;
        }else if(arr[mid]<x) low=mid+1;
        else high=mid-1;
    }
    return first;
}
int findLastElement(vector<int>arr,int n,int x){
    int low=0,high=n-1,last=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            last=mid;
            low=mid+1;
        }else if(arr[mid]<x) low=mid+1;
        else high=mid-1;
    }
    return last;
}
vector<int> findFirstAndLastElement(vector<int>arr,int n,int x){
    int first=findFirstElement(arr,n,x);
    if(first==-1) return {-1,-1};
    int last=findLastElement(arr,n,x);
    return {first,last};
}
int main(){
    int n,x;
    cin>>n>>x;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int>answer=findFirstAndLastElement(arr,n,x);
    for(int i=0;i<answer.size();i++) cout<<answer[i]<<" ";
    return 0;
}