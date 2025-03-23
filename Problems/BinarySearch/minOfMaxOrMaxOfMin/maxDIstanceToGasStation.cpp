#include<bits/stdc++.h>
using namespace std;
//Better approach using priority queue
//Time Complexity : O(nlogn)+O(klogn), Space Complexity : O(n-1)
long double maxDistanceBetter(vector<int>arr,int n,int k){
    vector<int>howMany(n-1,0);
    priority_queue<pair<long double,int>>pq;
    for(int i=0;i<n-1;i++){
        pq.push({arr[i+1]-arr[i],i});
    }
    for(int gasStations=1;gasStations<=k;gasStations++){
        auto top=pq.top();
        pq.pop();
        int sectionIndex=top.second;
        howMany[sectionIndex]++;
        long double initialDifference=arr[sectionIndex+1]-arr[sectionIndex];
        long double newDifference=initialDifference/(long double)(howMany[sectionIndex]+1);
        pq.push({newDifference,sectionIndex});
    }
    return pq.top().first;
}
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