// Problem Link https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1
#include<bits/stdc++.h>
using namespace std;
//Optimal Approach
//Time complexity: O(n), Space complexity: O(n)
vector<int> leadersArrayOptimal(vector<int>nums){
    int n=nums.size();
    vector<int> answer;
    int maximum=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(nums[i]>=maximum){
            answer.push_back(nums[i]);
        }
        maximum = max(maximum,nums[i]);
    }
    reverse(answer.begin(),answer.end());
    return answer;
}
//Brute Force Approach
//Time complexity: O(n^2), Space complexity: O(n) 
vector<int> leadersArray(vector<int>nums){
    int n = nums.size();
    vector<int> answer;
    for(int i=0;i<n;i++){
        bool leader = true;
        for(int j=i+1;j<n;j++){
            if(nums[i]<nums[j]){
                leader=false;
                break;
            }
        }
        if(leader==true){
            answer.push_back(nums[i]);
        }
    }
    return answer;
}
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin >> nums[i];
    vector<int>answer = leadersArray(nums);
    for(int i=0;i<answer.size();i++) cout << answer[i];
    return 0;
}