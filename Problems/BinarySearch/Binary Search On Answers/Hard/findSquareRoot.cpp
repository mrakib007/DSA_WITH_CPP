#include<bits/stdc++.h>
using namespace std;
//Optimized approach using binary search.
//time complexity is O(logn)
//space complexity is O(1)
int findSquareRootOptimized(int n){
    int low=1,high=n,ans=1;
    while(low<=high){
        int mid=(low+high)/2;
        if(mid*mid<=n){
            ans=mid;
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return high;
}
//Brute force approach.
//time complexity is O(n)
//space complexity is O(1)
int findSquareRootBrute(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        if(i*i<=n){
            ans=i;
        }else break;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int ans=findSquareRootOptimized(n);
    cout<<ans<<endl;
    return 0;
}