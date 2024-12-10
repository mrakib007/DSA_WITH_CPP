#include<bits/stdc++.h>
using namespace std;
vector<int> unionArray(vector<int> arr1,vector<int>arr2){
    set<int> st;
    for(int i=0;i<arr1.size();i++) st.insert(arr1[i]);
    for(int i=0;i<arr2.size();i++) st.insert(arr2[i]);
    vector<int> unionVector;
    for(auto it : st) unionVector.push_back(it);
    return unionVector;
}
int main()
{
    int n1,n2;
    cin >> n1;
    cin >> n2;
    vector<int> arr1(n1);
    vector<int> arr2(n2);
    for(int i=0;i<n1;i++) cin>>arr1[i];
    for(int i=0;i<n2;i++) cin>>arr2[i];
    vector<int> result = unionArray(arr1, arr2);
    for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
    return 0;
}

//time complexity : O(n+m)
//space complexity : O(n+m)