#include<bits/stdc++.h>
using namespace std;
int findNumBrute(vector<int> arr,int n){
    for(int i=0;i<n;i++){
        int count = 0;
        int num = arr[i];
        for(int j=0;j<n;j++){
            if(arr[j]==num) count++;
        }
        if(count==1) return num;
    }
}
int findNumOptimal(vector<int> arr,int n){
    int xorr = 0;
    for(int i=0;i<n;i++) xorr = xorr^arr[i];
    return xorr;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int num = findNumBrute(arr,n);
    int num2 = findNumOptimal(arr,n);
    cout << num << endl;
    return 0;
}
//Brute Force
//TC O(N*N)
//SC O(1)