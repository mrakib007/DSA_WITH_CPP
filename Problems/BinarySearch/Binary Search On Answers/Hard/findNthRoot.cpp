#include<bits/stdc++.h>
using namespace std;
//Optimized approach
//time complexity is O(logn)
//space complexity is O(1)
int findExp(int x,int n,int m){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*x;
        if(ans>m){
            return 2;
        }
    }
    if(ans==m) return 1;
    return 0;
}
int findNthRootOptimized(int n,int m){
    int low=1,high=m;
    while(low<=high){
        int mid=(low+high)/2;
        if(findExp(mid,n,m)==1){
            return mid;
        }else if(findExp(mid,n,m)==0){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return -1;
}
//Brute force approach.
//time complexity is O(n)
//space complexity is O(1)
int findPower(int x,int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*x;
    }
    return ans;
}
int findNthRootBrute(int n,int m){
    for(int i=1;i<=n;i++){
        if(findPower(i,n)==m){
            return i;
        }else if(findPower(i,n)>m){
            break;
        }
    }
    return -1;
}
int main(){
    int n,m;
    cin>>n>>m;
    int answer=findNthRootBrute(n,m);
    cout<<answer<<endl;
    return 0;
}