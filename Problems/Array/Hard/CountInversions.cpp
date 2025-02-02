#include<bits/stdc++.h>
using namespace std;  
//Brute force approach. Time complexity is O(n^2) and space complexity is O(1)
int countInversionBrute(vector<int>arr,int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]) count++;
        }
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int answer =countInversionBrute(arr,n);
    cout<<answer;
    return 0;
}