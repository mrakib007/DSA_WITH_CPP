#include<bits/stdc++.h>
using namespace std;
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