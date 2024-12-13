#include <bits/stdc++.h>
using namespace std;
int missingNumberWithSum(vector<int>&a, int N) {
   int sum = N*(N+1)/2;
   int tempSum = 0;
   for(int i=0;i<N-1;i++){
       tempSum = tempSum+a[i]; 
   }
   int missingNum = sum-tempSum;
   return missingNum;
}
int missingNumberWithXOR(vector<int>&a, int N) {
   int xor1=0,xor2=0;
   int n=N-1;
   for(int i=0;i<n;i++){
    xor2= xor2^a[i];
    xor1= xor1^(i+1);
   }
   xor1=xor1^N;
   return xor1^xor2;
}
// TC O(N)
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    int missingNum = missingNumberWithSum(arr,n);
    int missingNumWithXOR = missingNumberWithXOR(arr,n);
    cout<<missingNum;
    cout<<missingNumWithXOR;
    return 0;
}
// TC O(N)
// SC O(1)