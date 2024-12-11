#include<bits/stdc++.h>
using namespace std;
vector<int> intersectionArray(vector<int> arr1,int n,vector<int> arr2,int m){
    int visited[m] = {0};
    vector<int> result;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i] == arr2[j] && visited[j] == 0){
                result.push_back(arr1[i]);
                visited[j] = 1;
                break;
            }
            if(arr1[i] < arr2[j]) break;
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