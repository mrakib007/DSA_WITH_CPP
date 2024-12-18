#include<bits/stdc++.h>
using namespace std;
int longestSubArrayOnlyPositive(vector<int> arr, long long k) {
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLength = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        if (sum == k) {
            maxLength = max(maxLength, i + 1);
        }
        long long rem = sum - k;
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLength = max(maxLength, len);
        }
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }
    return maxLength;
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    long long k;
    cin >> k;
    int len1 = longestSubArrayOnlyPositive(arr, k);
    cout << len1;
    return 0;
}
