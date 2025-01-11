#include<bits/stdc++.h>
using namespace std;
//1. Find the value of nCr. Time complexity : O(r), Space complexity : O(1)
//2. Print Nth row. Using zero based indexing, this solution has Time complexity : O(n), Space complexity : O(1)
void printNthRow(int n){
    long long ans=1;
    cout<<ans<<" ";
    for(int i=1;i<n;i++){
        ans=ans*(n-i);
        ans=ans/i;
        cout<<ans<<" ";
    }
}
int printFunction(int n,int r){
    int res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}
int main(){
    int n,r;
    cin>>n>>r;
    int ans=printFunction(n,r);
    cout<<ans<<"\n";
    printNthRow(n);
    return 0;
}