#include<bits/stdc++.h>
using namespace std;
//Brute Force. Time Complexity: O(n^3), Space Complexity: O(1)
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

vector<vector<int>> setMatrixToZeroBetter(vector<vector<int>>&matrix,int n,int m){
    int col[m]={0};
    int row[n]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                row[i]=1;
                row[j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i]||col[j]==1){
                matrix[i][j]=0;
            }
        }
    }
    return matrix;
}
//Time complexity for better approach: O(2*n*m), Space Complexity: O(n+m)

vector<vector<int>>setMatrixToZeroOptimized(vector<vector<int>>&matrix,int n,int m){
    //int col[m]={0}; -> matrix[0][...]
    //int row[n]={0}; -> matrix[...][0]
    int col0=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                matrix[i][0]=0;
                if(j!=0) matrix[0][j]=0;
                else col0=0;
            }
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(matrix[i][j]!=0){
                if(matrix[i][0]==0||matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
    }
    if(matrix[0][0]==0){
        for(int j=0;j<m;j++) matrix[0][j]=0;
    }
    if(col0==0){
        for(int i=0;i<n;i++) matrix[i][0]=0;
    }
    return matrix;
}
//Time Complexity: O(2*n*m), Space Complexity: O(1)
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