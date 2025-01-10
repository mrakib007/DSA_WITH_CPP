#include<bits/stdc++.h>
using namespace std;
bool containsDuplicateOptimized(vector<int>&nums){
    unordered_set<int>st;
    for(int i=0;i<nums.size();i++){
        if(st.find(nums[i])!=st.end()){
            return true;
        }
        st.insert(nums[i]);
    }
    return false;
}
//This approach has Time complexity of O(nlogn) and Space complexity of O(n)
bool containsDuplicate(vector<int>&nums){
    map<int,int>mpp;
    for(int i=0;i<nums.size();i++){
        mpp[nums[i]]++;
        if(mpp[nums[i]]>1){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    bool answer=containsDuplicate(nums);
    cout<<answer;
    return 0;
}