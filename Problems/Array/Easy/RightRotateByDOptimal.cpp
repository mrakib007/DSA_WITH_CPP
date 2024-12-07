#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int start, int end){
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void rightRotate(int arr[], int n, int d){
    d= d%n;
    reverseArray(arr,0,n-1);
    reverseArray(arr,0,d-1);
    reverseArray(arr,d,n-1);
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
    return 0;
}