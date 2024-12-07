#include<bits/stdc++.h>
using namespace std;
vector<int> leftRotate(vector<int> &arr){
    int temp = arr[0];
    for(int i=1;i<arr.size();i++) arr[i-1] = arr[i];
    arr[arr.size()-1] = temp;
    return arr;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    leftRotate(arr);
    for(int i=0;i<n;i++) cout << arr[i] << " ";
}

//time complexity: O(n)                     
//space complexity: O(n)
//extra space used: O(1)