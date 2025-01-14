#include<bits/stdc++.h>
using namespace std;
//Better approach. Time complexity is O(n) and space complexity is O(1)
list<int>majorityElementBetter(vector<int>&nums){
    list<int>answer;
    map<int,int>mpp;
    int n=nums.size();
    int minimumCount=n/3;
    for(int i=0;i<n;i++){
        mpp[nums[i]]++;
        if(mpp[nums[i]]==minimumCount){
            answer.push_back(nums[i]);
        }
    }
    return answer;
}
//Brute Force Approach. Time complexity is O(n^2) and space complexity is O(1)
vector<int>majorityElementBrute(vector<int>&nums){
    vector<int>answer;
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(answer.size()==0||answer[0]!=nums[i]){
            int count=0;
            for(int j=0;j<n;j++){
                if(nums[j]==nums[i]){
                    count++;
                }
                if(count>n/3){
                    answer.push_back(nums[i]);
                    break;
                }
            }
            if(answer.size()==2){
                break;
            }
        }
    }
    return answer;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    vector<int> ans = majorityElementBrute(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}