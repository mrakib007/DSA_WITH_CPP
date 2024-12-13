#include<bits/stdc++.h>
using namespace std;
int findMissingNum(int arr1[],int n){
    for(int i=1;i<=n;i++){
        int flag = 0;
        for(int j=0;j<n-1;j++){
            if(arr1[j] == i){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cin >> n;
    int arr1[n];
    for(int i=0;i<n;i++) cin >> arr1[i];
    int missingNum = findMissingNum(arr1,n);
    cout<<missingNum;
    return 0;
}

// TC = (N*N)
// SC = O(1)