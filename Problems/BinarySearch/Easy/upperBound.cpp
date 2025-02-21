#include<bits/stdc++.h>
using namespace std;
int findUpperBound(vector<int> arr,int n,int x){
    int low=0,high=n-1;
    int index=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>x){
            index=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return index;
}
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int index=findUpperBound(arr,n,x);
    cout<<index<<endl;
    return 0;
}