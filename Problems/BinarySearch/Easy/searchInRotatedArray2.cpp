#include<bits/stdc++.h>
using namespace std;
//Time complexity=O(logn), Space complexity=O(1)
//This is the optimized approach to search an element in the rotated array.
//For determining mid, at times it can cause out of bound error if n is very large. So, we can use mid=low+(high-low)/2, or use long long int for mid
bool searchInRotatedArray(vector<int> arr,int n,int target){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target) return true;
        if(arr[low]==arr[mid] && arr[mid]==arr[high]){
            low++;
            high--;
            continue;
        }
        if(arr[low]<=arr[mid]){
            if(arr[low]<=target && target<=arr[mid]) high=mid-1;
            else low=mid+1;
        }else{
            if(arr[mid]<=target && arr[high]>=target) low=mid+1;
            else high=mid-1;
        }
    }
    return false;
}
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    bool answer=searchInRotatedArray(arr,n,x);
    cout<<answer<<endl;
    return 0;
}