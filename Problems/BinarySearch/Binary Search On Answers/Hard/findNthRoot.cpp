#include<bits/stdc++.h>
using namespace std;
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