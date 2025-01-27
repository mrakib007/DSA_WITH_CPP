#include<bits/stdc++.h>
using namespace std;
int subArrayWithXORBrute(vector<int>&arr,int k){
    int n=arr.size();
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int XOR=0;
            for(int k=i;k<=j;k++){
                XOR=XOR^arr[k];
                if(XOR==k){
                    count++;
                }
            }
        }
    }
    return count;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=subArrayWithXORBrute(arr,k);
    cout << count;
    return 0;
}