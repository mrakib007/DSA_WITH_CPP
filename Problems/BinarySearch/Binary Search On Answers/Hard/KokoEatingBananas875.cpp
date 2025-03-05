#include<bits/stdc++.h>
using namespace std;
//Optimized approach with Binary search. 
//Time complexity is O(nlog(max(arr))*n), Space complexity is O(1)
long long findHours(vector<int>piles,int mid){
    long long totalHours=0;
    int n=piles.size();
    for(int i=0;i<n;i++){
        totalHours=totalHours+ceil((double)piles[i]/(double)mid);
    }
    return totalHours;
}
int findMax(vector<int>piles){
    int n=piles.size();
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(piles[i]>max){
            max=piles[i];
        }
    }
    return max;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=findMax(piles);
        while(low<=high){
            int mid=(low+high)/2;
            long long totalHours=findHours(piles,mid);
            if(totalHours<=h){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
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