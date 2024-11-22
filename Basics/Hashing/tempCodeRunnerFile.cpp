
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    //precompute
    int hash[13] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    int q;
    cin >> q;
    while(q--){
        int number;
        cout << "enter the number you want to see" << endl;
        cin >> number;
        // fetch
        cout << hash[number] << endl;
    }
    return 0;
}