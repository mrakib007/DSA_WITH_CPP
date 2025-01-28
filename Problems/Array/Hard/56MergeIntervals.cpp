#include<bits/stdc++.h>
using namespace std;
//Optimized approach is O(nlogn)+O(n) and space complexity is O(n)
vector<vector<int>>mergeIntervalsOptimized(vector<vector<int>>&intervals, int n){
    sort(intervals.begin(),intervals.end());
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        if(ans.empty()||intervals[i][0]>ans.back()[1]){
            ans.push_back(intervals[i]);
        }else{
            ans.back()[1]=max(ans.back()[1],intervals[i][1]);
        }
    }
    return ans;
}
//Brute force approach is nlogn+2n. Space complexity is O(n)
vector<vector<int>>mergeIntervalsBrute(vector<vector<int>>&intervals,int n){
    sort(intervals.begin(),intervals.end());
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        int start=intervals[i][0];
        int end=intervals[i][1];
        if(!ans.empty()&&end<=ans.back()[1]) continue;
        for(int j=i+1;j<n;j++){
            if(intervals[j][0]<=end){
                end=max(end,intervals[j][1]);
            }else{
                break;
            }
        }
        ans.push_back({start,end});
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>intervals(n,vector<int>(2));
    for(int i=0;i<n;i++){
        cin>>intervals[i][0]>>intervals[i][1];
    }
    vector<vector<int>>result=mergeIntervalsBrute(intervals,n);
    for(int i=0;i<result.size();i++){
        cout<<result[i][0]<<" "<<result[i][1]<<endl;
    }
    return 0;
}