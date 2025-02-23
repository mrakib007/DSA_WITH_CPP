#include<bits/stdc++.h>
using namespace std;
//Time complexity=O(logn)
//Space complexity=O(1)
//This is the optimized approach to find the first and last occurance of an element in the array.
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

    //If in the question it is asked to find the number of occurances of x in the array.
    // if(first==-1) return 0;
    // int last=findLastElement(arr,n,x);
    // return last-first+1;
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