#include<bits/stdc++.h>
using namespace std;
void moveZero(vector<int> &arr,int n){
    int j = -1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[j],arr[i]);
            j++;
        }
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    moveZero(arr,n);
    for(int i=0;i<n;i++) cout << arr[i] << " ";
    return 0;
}
//Time Complexity: O(n)
//Space Complexity: O(1)