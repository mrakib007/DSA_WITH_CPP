#include<bits/stdc++.h>
using namespace std;
//Optimal approach
//Time complexity: O(n), Space complexity: O(1)
vector<int> rearrangeArrayBySignOptimal(vector<int>& nums){
    vector<int> answer(nums.size(),0);
    int positive=0,negative=1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>0){
            answer[positive]=nums[i];
            positive+=2;
        }else{
            answer[negative]=nums[i];
            negative+=2;
        }
    }
    return answer;
}
//Brute force approach
//Time complexity: O(2n), Space complexity: O(n)
vector<int> rearrangeArrayBySign(vector<int>& nums){
    int n=nums.size();
    vector<int> positive;
    vector<int> negative;
    for(int i=0;i<n;i++){
        if(nums[i]>=0){
            positive.push_back(nums[i]);
        }else{
            negative.push_back(nums[i]);
        }
    }
    for(int i=0;i<positive.size();i++){
        nums[2*i]=positive[i];
    }
    for(int i=0;i<negative.size();i++){
        nums[2*i+1]=negative[i];
    }
    return nums;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int> result = rearrangeArrayBySign(arr);
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
    return 0;
}