#include<bits/stdc++.h>
using namespace std;
//Brute force approach. Time complexity is O(n^2), Space complexity is O(1)
int reversePairsBrute(vector<int>arr,int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>2LL*arr[j]) count++;
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int answer=reversePairsBrute(arr,n);
    cout<<answer<<endl;
    return 0;
}