#include<bits/stdc++.h>
using namespace std;
bool canPlace(vector<int>&stalls,int n,int dist,int cows){
    int countCows=1,lastCow=stalls[0];
    for(int i=1;i<n;i++){
        if(stalls[i]-lastCow>=dist){
            countCows++;
            lastCow=stalls[i];
        }
    }
    return countCows>=cows;
}
int findMinDistanceBrute(vector<int>&stalls,int n,int c){
    int maximum=*max_element(stalls.begin(),stalls.end());
    int minimum=*min_element(stalls.begin(),stalls.end());
    for(int i=1;i<=maximum-minimum;i++){ //maximum-minimum is the maximum possible distance between two cows.
        if(canPlace(stalls,n,i,c)) continue; //i is the distance between two cows, c is the number of cows.
        else return i-1;
    }
    return maximum-minimum;
}
int main(){
    int n,c;
    cin>>n>>c;
    vector<int>stalls(n);
    for(int i=0;i<n;i++) cin>>stalls[i];
    sort(stalls.begin(),stalls.end());
    int ans=findMinDistanceBrute(stalls,n,c);
    cout<<ans<<endl;
    return 0;
}