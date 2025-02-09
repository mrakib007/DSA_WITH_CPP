#include<bits/stdc++.h>
using namespace std;
//Optimized approach. Time complexity is O(n), Space complexity is O(1)
int maximumSubarrayOptimized(vector<int>arr,int n){
    int maxProduct=INT_MIN;
    int suffix=1;
    int prefix=1;
    for(int i=0;i<n;i++){
        if(suffix==0) suffix=1;
        if(prefix==0) prefix=1;
        suffix=suffix*arr[i];
        prefix=prefix*arr[n-i-1];
        maxProduct=max(maxProduct,max(suffix,prefix));
    }
    return maxProduct;
}
//Better approach. Time complexity is O(n^2), Space complexity is O(1)
int maximumSubarrayBetter(vector<int> arr,int n){
    int maxProduct=INT_MIN;
    for(int i=0;i<n;i++){
        int product=1;
        for(int j=i;j<n;j++){
            product=product*arr[j];
            maxProduct=max(maxProduct,product);
        }
    }
    return maxProduct;
}
//Brute force approach. Time complexity is O(n^3), Space complexity is O(1)
int maximumSubarrayBrute(vector<int> arr,int n){
    int maxProduct=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int product=1;
            for(int k=i;k<=j;k++){
                product*=arr[k];
            }
            maxProduct=max(maxProduct,product);
        }
    }
    return maxProduct;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int answer=maximumSubarrayBrute(arr,n);
    cout<<answer<<endl;
    return 0;
}