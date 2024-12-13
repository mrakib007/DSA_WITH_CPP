#include<bits/stdc++.h>
using namespace std;
int maxConsecutiveOnes(vector<int>& nums,int n){
    int count = 0;
    int maxCount = 0;
    for(int i=0;i<n;i++){
        if(nums[i]==1){
            count++;
            maxCount = max(count,maxCount);
        }else{
            count = 0;
        }
    }
    return maxCount;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int result = maxConsecutiveOnes(arr,n);
    cout << result;
    return 0;
}