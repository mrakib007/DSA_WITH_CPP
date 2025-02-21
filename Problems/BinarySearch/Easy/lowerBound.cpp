#include<bits/stdc++.h>
using namespace std;
//Time complexity is O(logn), Space complexity is O(1)
//Here overflow can occur if n is very large. So, we can use mid=low+(high-low)/2, or use long long int for mid
int lowerBound(vector<int>&arr,int n,int x){
    int low=0,high=n-1;
    int index=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=x){
            index=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return index;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int x;
    cin>>x;
    int index = lowerBound(arr,n,x);
    cout<<index<<endl;
    return 0;
}