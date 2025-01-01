#include<bits/stdc++.h>
using namespace std;
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