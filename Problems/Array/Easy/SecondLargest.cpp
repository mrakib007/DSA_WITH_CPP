#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    int largest = arr[0];
    int second_largest = -1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest) largest = arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>second_largest && arr[i]!=largest) second_largest = arr[i];
    }
    cout << largest << " " << second_largest << endl; 
    return 0;
}