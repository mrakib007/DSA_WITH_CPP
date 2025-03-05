#include<bits/stdc++.h>
using namespace std;
//Brute force approach
//Time complexity is O(max(arr)*n), Space complexity is O(1)
int calculateTime(vector<int> arr,int hourly){
    int totalHours=0;
    for(int i=0;i<arr.size();i++){
        totalHours+=ceil((double)arr[i]/hourly);
    }
    return totalHours;
}
int findHoursBrute(vector<int> arr,int n,int h){
    int maxVal=*max_element(arr.begin(), arr.end());
    for(int i=1;i<=maxVal;i++){
        int requiredTime=calculateTime(arr,i);
        if(requiredTime<=h) return i;
    }
}
int main(){
    int n,h;
    cin>>n>>h;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int ans=findHoursBrute(arr,n,h);
    cout<<ans<<endl;
    return 0;
}