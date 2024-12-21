#include<bits/stdc++.h>
using namespace std;
//Better Approach. Time Complexity: O(n), Space Complexity: O(1)
vector<int> sortArray(vector<int>&nums){
    int count0=0,count1=0,count2=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0) count0++;
        else if(nums[i]==1) count1++;
        else if(nums[i]==2) count2++;
    }
    for(int i=0;i<count0;i++) nums[i] = 0;
    for(int i=count0;i<count0+count1;i++) nums[i] = 1;
    for(int i=count0+count1;i<nums.size();i++) nums[i] = 2;
    return nums;
}
//Optimized Approach. Time Complexity: O(n), Space Complexity: O(1)
void sortArrayOptimized(vector<int>&nums){
    int low=0,mid=0,high=nums.size()-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }else if(nums[mid]==1){
            mid++;
        }else if(nums[mid]==2){
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int> result = sortArray(arr);
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
    return 0;
}