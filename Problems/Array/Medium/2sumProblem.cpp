#include<bits/stdc++.h>
using namespace std;
//Brute Force Approach
vector<int>twoSum(vector<int>& nums,int target){
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                return {i,j};
            }
        }
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int target;
    cin >> target;
    vector<int> result = twoSum(arr,target);
    if(!result.empty()){
        cout<<result[0]<< " "<<result[1]<<endl;
    }else{
        cout<<"No such pair found"<<endl;
    }
    return 0;
}
//For Brute Force the time complexity is O(n^2) and space complexity is O(1)