#include<bits/stdc++.h>
using namespace std;
//Time complexity=O(logn), Space complexity=O(1)
//This is the optimized approach to search an element in the rotated array.
int searchInRotatedArray(vector<int> arr,int n,int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x)return mid;
        if(arr[low]<=arr[mid]){
            if(arr[low]<=x && x<=arr[mid]) high=mid-1;
            else low=mid+1;
        }else{
            if(arr[mid]<=x && x<=arr[high]) low=mid+1;
            else high=mid-1;
        }
    }
    return -1;
}
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int index = searchInRotatedArray(arr,n,x);
    cout<<index<<endl;
    return 0;
}