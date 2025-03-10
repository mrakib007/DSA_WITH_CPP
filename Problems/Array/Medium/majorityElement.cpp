#include<bits/stdc++.h>
using namespace std;
//Brute force approach. Time Complexity: O(n^2), Space Complexity: O(1)
int majorityElement(vector<int> arr){
    int n = arr.size();
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>n/2) return arr[i];
    }
    return -1;
}
//Better Approach. Time Complexity: O(nlogn), Space Complexity: O(n)
int majorityElementBetter(vector<int>arr){
    int n=arr.size();
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        if(it.second>n/2) return it.first;
    }
    return -1;
}
//Optimal Approach using Moore's Algorithm
//Time complexity: O(n), Space Complexity: O(1)
int majorityElementOptimal(vector<int>& nums) {
    int count1=0;
    int element;
    int n = nums.size();
    for(int i=0;i<n;i++){
        if(count1==0){
            element=nums[i];
            count1++;
            }else if(nums[i]==element){
                count1++;
            }else{
                count1--;
            }
        }
        int count2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==element){
                count2++;
            }
        }
        if(count2>n/2) return element;
        return -1;
    
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int result = majorityElement(arr);
    cout << result << endl;
}