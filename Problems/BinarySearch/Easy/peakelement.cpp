#include<bits/stdc++.h>
using namespace std;
int findPeakBrute(vector<int>arr,int n){
    for(int i=0;i<n;i++){
        if((i==0||arr[i-1]<arr[i]) && (i==n-1||arr[i]>arr[i+1])) return arr[i];
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int anss=findPeakBrute(arr,n);
    cout<<anss<<endl;
    return 0;
}