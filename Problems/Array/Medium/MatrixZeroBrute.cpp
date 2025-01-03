#include<bits/stdc++.h>
using namespace std;
void markRow(vector<vector<int>>&matrix,int rowIndex,int m){
    for(int j=0;j<m;j++){
        if(matrix[rowIndex][j]!=0){
            matrix[rowIndex][j]=-1;
        }
    }
}
void markColumn(vector<vector<int>>&matrix,int colIndex,int n){
    for(int i=0;i<n;i++){
        if(matrix[i][colIndex]!=0){
            matrix[i][colIndex]=-1;
        }
    }
}
void setMatrixToZeroBrute(vector<vector<int>>&matrix,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                markRow(matrix,i,m);
                markColumn(matrix,j,n);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==-1){
                matrix[i][j]=0;
            }
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>matrix(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    setMatrixToZeroBrute(matrix,n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}