#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    int largest = arr[0];
    int second_largest = -1;
    int smallest = arr[0];
    int second_smallest = INT_MAX;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            second_largest = largest;
            largest = arr[i];
        }else if(arr[i]>second_largest && arr[i]<largest) second_largest = arr[i];
    }
    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            second_smallest = smallest;
            smallest = arr[i];
        }else if(arr[i]<second_smallest && arr[i]>smallest) second_smallest = arr[i];    
    }
}