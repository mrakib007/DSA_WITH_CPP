//Problem Link : https://www.naukri.com/code360/problems/alternate-numbers_6783445?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTabValue=SUBMISSION
#include<bits/stdc++.h>
using namespace std;
//brute force approach
//Time complexity: O(2n), Space complexity: O(n)
vector<int> alternateNumbers(vector<int>& nums){
    int n=nums.size();
    vector<int> positive,negative;
    for(int i=0;i<n;i++){
        if(nums[i]>=0){
            positive.push_back(nums[i]);
        }else{
            negative.push_back(nums[i]);
        }
    }
    if(positive.size()>negative.size()){
        for(int i=0;i<negative.size();i++){
            nums[2*i]=positive[i];
            nums[2*i+1]=negative[i];
        }
        int index = negative.size()*2;
        for(int i=negative.size();i<positive.size();i++){
            nums[index]=positive[i];
            index++;
        }
    }else{
        for(int i=0;i<positive.size();i++){
            nums[2*i]=positive[i];
            nums[2*i+1]=negative[i];
        }
        int index = positive.size()*2;
        for(int i=positive.size();i<negative.size();i++){
            nums[index]=negative[i];
            index++;
        }
    }
    return nums;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int> result = alternateNumbers(arr);
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
    return 0;
}