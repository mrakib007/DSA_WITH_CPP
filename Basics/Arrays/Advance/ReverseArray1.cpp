#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    if (n <= 0){
        cout << "Invalid Input" << endl;
        return 0;
    }
    int arr[n];
    int ans[n];
    cout << "Enter the elements of the array: " << endl;

    for(int i=0;i<n;i++){
        cin >> arr[i];    
    }

    for(int j=n-1;j>=0; j--){
        ans[n-j-1] = arr[j];
    }

    for(int k=0;k<n;k++){
        cout << ans[k] << " ";
    }
}