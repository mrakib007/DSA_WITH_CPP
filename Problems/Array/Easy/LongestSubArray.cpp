#include<bits/stdc++.h>
using namespace std;
int findMaxlength(int arr[],int n,int k){
    int maxlength = 0;
    for(int i=0;i<n;i++){
        int s=0;
        for(int j=i;j<n;j++){
            s= s+arr[j];
            if(s==k) maxlength = max(maxlength,j-i+1);
        }
    }
    return maxlength;
}
int main(){
    int n;
    cin >> n;
    int k;
    cin >> k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int maxLength = findMaxlength(arr,n,k);
    cout<<maxLength;
    return 0;
}
//brute force solution : TC O(N^2), SC O(1)