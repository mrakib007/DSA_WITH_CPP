#include <bits/stdc++.h>
using namespace std;
vector<int> spiralPrintMatrix(vector<vector<int>> &matrix){  
    int n=matrix.size(),m=matrix[0].size(),left=0,right=m-1,top=0,bottom=n-1;vector<int> answer;
    while(top<=bottom&&left<=right){
        for(int i=left;i<=right;i++)answer.push_back(matrix[top][i]);
        top++;
        for(int i=top;i<=bottom;i++)answer.push_back(matrix[i][right]);
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--)answer.push_back(matrix[bottom][i]);
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--)answer.push_back(matrix[i][left]);
            left++;
        }
    }
    return answer;
}
int main(){
    int n,m;cin>>n>>m;vector<vector<int>> matrix(n,vector<int>(m));
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>matrix[i][j];
    vector<int> answer=spiralPrintMatrix(matrix);
    for(int i=0;i<answer.size();i++)cout<<answer[i]<<" ";
    return 0;
}
