#include<bits/stdc++.h>
using namespace std;
int findMaxElement(vector<int> arr,int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
    }
    return max;
}
int findSmallestDivisor(vector<int> arr,int n,int threshold){
    for(int d=1;d<=findMaxElement(arr,n);d++){
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+(ceil((double)arr[i]/d));
        }
        if(sum<=threshold) return d;
    }
    return -1;
}
int main(){
    int n,threshold;
    cin>>n>>threshold;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int ans=findSmallestDivisor(arr,n,threshold);
    cout<<ans<<endl;
    return 0;
}