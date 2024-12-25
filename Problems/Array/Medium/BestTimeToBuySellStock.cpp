#include<bits/stdc++.h>
using namespace std;
//Time Complexity : O(n)
//Space Complexity : O(1)
int maximumProfit(vector<int>& prices) {
    int n = prices.size();
    int minimum = prices[0];
    int maximum = 0;
    for(int i = 1; i< n; i++){
        int profit = prices[i] - minimum;
        maximum = max(maximum, profit);
        minimum = min(minimum, prices[i]);
    }
    return maximum;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>> arr[i];
    int maxProfit = maximumProfit(arr);
    cout<<maxProfit<<endl;
    return 0;
}