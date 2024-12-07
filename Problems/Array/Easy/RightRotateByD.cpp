#include<bits/stdc++.h>
using namespace std;
void rightRotate(int arr[], int n, int d){
    d= d%n;
    int temp[d];
    int j = n-d;
    for(int i=0;i<d;i++){
        temp[i] = arr[j];
        j++;
    } 
    for(int i=n-1;i>=d;i--) arr[i] = arr[i-d];
    for(int i=0;i<d;i++) arr[i] = temp[i];
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    int d;
    cin >> d;
    rightRotate(arr,n,d);
    for(int i=0;i<n;i++) cout << arr[i] << " ";
}
//time complexity : O(n)
//space complexity : O(n)