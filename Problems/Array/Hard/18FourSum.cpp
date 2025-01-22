#include<bits/stdc++.h>
using namespace std;
//Optimized Approach. Time complexity is O(n^3) and space complexity is O(number of quadruplets). It's not used for 
//solving the problem, rather returning the answer. 
vector<vector<int>> fourSumOptimized(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>answer;
        for(int i=0;i<n;i++){
            if(i>0 && nums[i-1]==nums[i]) continue;
            for(int j=i+1;j<n;j++){
                if(j!=i+1 && nums[j-1]==nums[j]) continue;
                int k=j+1;
                int l=n-1;
                while(k<l){
                    long long sum=nums[i];
                    sum=sum+nums[j];
                    sum=sum+nums[k];
                    sum=sum+nums[l];
                    if(sum==target){
                        vector<int>temp={nums[i],nums[j],nums[k],nums[l]};
                        answer.push_back(temp);
                        k++; l--;
                        while(k<l && nums[k]==nums[k-1]) k++;
                        while(k<l && nums[l]==nums[l+1]) l--;
                    }else if(sum>target) l--;
                    else k++;
                }
            }
        }
        return answer;
    }
//Better Approach. Time complexity is O(n^3) and space complexity is O(N) + O(number of quadruplets).
//O(N) is the space complexity of the inner hashSet and O(number of quadruplets) is the space complexity of the set.
 vector<vector<int>> fourSumBetter(vector<int>& nums, int target) {
        int n=nums.size();
        set<vector<int>>st;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                set<long long> hashSet;
                for(int k=j+1;k<n;k++){
                    long long sum=nums[i]+nums[j];
                    sum=sum+nums[k];
                    long long last=target-sum;
                    if(hashSet.find(last)!=hashSet.end()){
                        vector<int>temp={nums[i],nums[j],nums[k],(int)last};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                    hashSet.insert(nums[k]);
                }
            }
        }
        vector<vector<int>>answer(st.begin(),st.end());
        return answer;
    }
vector<vector<int>> fourSumBrute(vector<int>& nums, int target) {
    int n=nums.size();
    set<vector<int>>st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int l=k+1;l<n;l++){
                    long long sum=nums[i]+nums[j];
                    sum=sum+nums[k];
                    sum=sum+nums[l];
                    if(sum==target){
                        vector<int> temp={nums[i],nums[j],nums[k],nums[l]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>>answer(st.begin(),st.end());
    return answer;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int target;
    cin>>target;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>>result=fourSumBrute(arr,target);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}