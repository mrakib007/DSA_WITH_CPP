#include<bits/stdc++.h>
using namespace std;
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