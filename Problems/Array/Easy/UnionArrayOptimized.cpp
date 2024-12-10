#include<bits/stdc++.h>
using namespace std;
vector<int> unionArray(vector<int> arr1,vector<int>arr2){
    int n1=arr1.size(),n2=arr2.size();
    int i=0,j=0;
    vector<int> unionArr;
    while(i<n1 && j<n2){
        if(arr1[i] <= arr2[j]){
            if(unionArr.size() == 0 || unionArr.back() != arr1[i]){
                unionArr.push_back(arr1[i]);
            } 
            i++;
        }else{
            if(unionArr.size() == 0 || unionArr.back() != arr2[j]){
                unionArr.push_back(arr2[j]); 
            }
            j++;
        }
    }
    while(i<n1){
        if(unionArr.size() == 0 || unionArr.back() != arr1[i]){
            unionArr.push_back(arr1[i]);
        } 
        i++;
    }
    while(j<n2){
        if(unionArr.size() == 0 || unionArr.back() != arr1[j]){
            unionArr.push_back(arr2[j]);
        } 
        j++;
    }
}
int main(){
    int n,m;
    cin >> n,m;
    vector<int> arr1(n),arr2(m);
    for(int i=0;i<n;i++) cin >> arr1[i];
    for(int i=0;i<m;i++) cin >> arr2[i];
    vector<int> result = unionArray(arr1, arr2);
    for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
    return 0;
}

// Time Complexity: O(n1 + n2)
// Space Complexity: O(n1 + n2) for returning the answer. not using in the algorithm.