#include<bits/stdc++.h>
using namespace std;
//Brute force approach
//Time Complexity : O(k*n)+O(n), Space Complexity : O(n)
int maxDistanceBrute(vector<int>arr,int n,int k){
    vector<int>howMany(n-1,0);
    for(int gasStations=1;gasStations<=k;gasStations++){
        int maxSection=-1;
        int maxIndex=-1;
        for(int i=0;i<n-1;i++){
            long double diff=(arr[i+1]-arr[i]);
            long double sectionLength=diff/(long double)(howMany[i]+1);
            if(sectionLength>maxSection){
                maxSection=sectionLength;
                maxIndex=i;
            }
        }
        howMany[maxIndex]++;
    }
    long double maxAns=-1;
    for(int i=0;i<n-1;i++){
        long double diff=(arr[i+1]-arr[i]);
        long double sectionLength=diff/(long double)(howMany[i]+1);
        maxAns=max(maxAns,sectionLength);
    }
    return maxAns;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int ans=maxDistanceBrute(arr,n,k);
    cout<<ans<<endl;
    return 0;
}