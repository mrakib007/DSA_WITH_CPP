#include<bits/stdc++.h>
using namespace std;
//Better Approach. Time complexity is O(n^2) and space complexity is O(n)
vector<vector<int>> findTripletBetter(vector<int>& nums) {
        set<vector<int>>st;
        for(int i=0;i<nums.size();i++){
            set<int>hashSet;
            for(int j=i+1;j<nums.size();j++){
                int third=-(nums[i]+nums[j]);
                if(hashSet.find(third)!=hashSet.end()){
                    vector<int>temp={nums[i],nums[j],third};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                hashSet.insert(nums[j]);
            }
        }
        vector<vector<int>>answer(st.begin(),st.end());
        return answer;
    }
//Brute Force approach. Time complexity is O(n^3) and space complexity is 2*O(number of triplets)
vector<vector<int>>findTripletBrute(vector<int>&nums,int n){
    set<vector<int>>st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(nums[i]+nums[j]+nums[k]==0){
                    vector<int> temp={nums[i],nums[j],nums[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>>ans(st.begin(),st.end());
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    vector<vector<int>> answer=findTripletBrute(nums,n);
     for (int i=0;i<answer.size();i++) {
        for (int j=0;j<answer[i].size();j++) {
            cout << answer[i][j];
        }
        cout << "\n"; 
    }
    return 0;
}