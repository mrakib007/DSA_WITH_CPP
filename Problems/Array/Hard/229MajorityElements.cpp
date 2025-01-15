#include<bits/stdc++.h>
using namespace std;
//Optimal approach. Time complexity is O(2n) and space complexity is O(1)
vector<int> majorityElementOptimal(vector<int>& nums) {
       int el1=INT_MIN;
       int el2=INT_MIN;
       int n=nums.size();
       int minimum=n/3+1;
       vector<int>answer;
       int count1=0,count2=0;
       for(int i=0;i<n;i++){
        if(count1==0 && el2!=nums[i]){
            count1=1;
            el1=nums[i];
        }else if(count2==0 && el1!=nums[i]){
            count2=1;
            el2=nums[i];
        }else if(el1==nums[i]) count1++;
        else if(el2==nums[i]) count2++;
        else{
            count1--;
            count2--;
            }
       }
       count1=0,count2=0;
       for(int i=0;i<nums.size();i++){
        if(el1==nums[i]) count1++;
        if(el2==nums[i]) count2++;
       }
       if(count1>=minimum) answer.push_back(el1);
       if(count2>=minimum) answer.push_back(el2);
       sort(answer.begin(),answer.end());
       return answer;
    }
//Better approach. Time complexity is O(n) and space complexity is O(n)
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
        if(answer.size()==2){
            break;
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