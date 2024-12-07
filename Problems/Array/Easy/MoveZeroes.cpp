#include<bits/stdc++.h>
using namespace std;
void countZeroes(vector<int>&arr,int n){
    int count = 0;
    vector<int> temp;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count++;
        }else{
            temp.push_back(arr[i]);
        }
    }
    for(int i=0;i<count;i++){
        temp.push_back(0);
    }
    arr = temp;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    countZeroes(arr,n);
    for(int i=0;i<n;i++) cout << arr[i] << " ";
}
//time complexity : O(n)
//space complexity : O(n)