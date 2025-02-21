#include<bits/stdc++.h>
using namespace std;
//Time complexity is O(logn), Space complexity is O(1)
//Here overflow can occur if n is very large. So, we can use mid=low+(high-low)/2, or use long long int for mid
int findXWithLoop(vector<int>&arr,int n,int x){
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==x) return mid;
        else if(arr[mid]<x) low=mid+1;
        else high=mid-1;
    }
    return -1;
}
int booleanSearch(vector<int>&arr,int low,int high,int target){
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(arr[mid]==target) return mid;
    else if(arr[mid]<target) return booleanSearch(arr,mid+1,high,target);
    return booleanSearch(arr,low,mid-1,target);
}
int findXWithRecursion(vector<int>&arr,int n,int x){
    return booleanSearch(arr,0,n-1,x);
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int x;
    cin>>x;
    int index = findXWithLoop(arr,n,x);
    cout<<index<<endl;
    int result = findXWithRecursion(arr,n,x);
    return 0;
}