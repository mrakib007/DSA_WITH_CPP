#include<bits/stdc++.h>
using namespace std;
vector<int> intersectionArray(vector<int> arr1,int n,vector<int> arr2,int m){
    vector<int> result;
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]) i++;
        else if(arr1[i]>arr2[j]) j++;
        else{
            result.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return result;
}
int main(){
    int n,m;
    cin >> n >> m;
    vector<int> arr1(n), arr2(m);
    for(int i=0;i<n;i++) cin >> arr1[i];
    for(int i=0;i<m;i++) cin >> arr2[i];
    vector<int> result = intersectionArray(arr1,n,arr2,m);
    for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
    return 0;
}

//time complexity : O(n1*n2)
//space complexity : O(n2)