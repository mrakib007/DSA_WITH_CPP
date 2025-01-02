#include<bits/stdc++.h>
using namespace std;
//Optimal Approach. This will have O(n) time complexity and O(n) space complexity
int longestSubsequenceOptimal(vector<int>&arr){
    int n=arr.size();
    if(n==0) return 0;
    unordered_set<int>st;
    int longest=1;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    for(auto it:st){
        if(st.find(it-1)==st.end()){
            int count=1;
            int x=it;
            while(st.find(x+1)!=st.end()){
                count++;
                x++;
            }
            longest=max(longest,count);
        }
    }
    return longest;
}
//This better solution will have O(nlogn) time complexity and O(1) space complexity
int longestSubsequenceBetterSolution(vector<int>& arr){
    int n=arr.size();
    if(n==0) return 0;
    sort(arr.begin(),arr.end());
    int longest=1;
    int count=0;
    int previous=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]==previous){
            continue;
        }else if(arr[i]-1==previous){
            count++;
            previous=arr[i];
        }else if(arr[i]-1!=previous){
            count=1;
            previous=arr[i];
        }
        longest=max(longest,count);
    }
    return longest;
}
int longestSubsequence(vector<int>& arr){
    int n=arr.size();
    if (n == 0) return 0;
    int longest=1;
    for(int i=0;i<n;i++){
        int x=arr[i];
        int count=1;
        for(int j=0;j<n;j++){
            if(arr[j]==x+1){
                count++;
                x=arr[j];
                j=-1;
            }
        }
        longest=max(longest,count);
    }
    return longest;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int longest = longestSubsequence(arr);
    cout<<longest<<endl;
    return 0;
}