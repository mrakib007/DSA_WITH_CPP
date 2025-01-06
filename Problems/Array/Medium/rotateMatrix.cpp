#include<bits/stdc++.h>
using namespace std;
//Brute Force Approach. Time Complexity: O(n*m), Space Complexity: O(n*m)
void rotateMatrixBrute(vector<vector<int>>&nums,int n,int m){
    vector<vector<int>> answer(m, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            answer[j][n-1-i]=nums[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>>nums(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> nums[i][j];
        }
    }
    rotateMatrixBrute(nums,n,m);
    return 0;
}