#include<bits/stdc++.h>
using namespace std;
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
    int ans=findSquareRootBrute(n);
    cout<<ans<<endl;
    return 0;
}