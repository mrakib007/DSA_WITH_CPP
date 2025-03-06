#include<bits/stdc++.h>
using namespace std;
int possibleOrNot(vector<int>&arr,int day,int m,int k){
    int count=0,numOfBouquets=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<=day){
            count++;
        }else{
            numOfBouquets+=count/k;
            count=0;
        }
    }
    numOfBouquets+=count/k;
    if(numOfBouquets>=m) return 'T';
    else return 'F';
}
//Brute force approach
//Time Complexity : O(max-min+1)*N, space complexity : O(1)
int minDaysBrute(vector<int>&arr,int m,int k){
    int mn = *min_element(arr.begin(), arr.end());
    int mx = *max_element(arr.begin(), arr.end());
    if(arr.size()<(m*k)) return -1;
    for(int i=mn;i<=mx;i++){
        if(possibleOrNot(arr,i,m,k)=='T') return i;
    }
    return -1;
}
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int answer=minDaysBrute(arr,m,k);
    cout<<answer<<endl;
    return 0;
}