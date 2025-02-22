#include<bits/stdc++.h>
using namespace std;
int findLowerBound(vector<int>&arr,int n,int x){
    int low=0,high=n-1;
    int index=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=x){
            high=mid-1;
            index=mid;
        }else{
            low=mid+1;
        }
    }
    return index;
}
int findUpperBound(vector<int>&arr,int n,int x){
    int low=0,high=n-1;
    int index=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>x){
            high=mid-1;
            index=mid;
        }else{
            low=mid+1;
        }
    }
    return index;
}
vector<int> firstAndLastOccuranceOptimized(vector<int>&arr,int n,int x){
    int lowerBound=findLowerBound(arr,n,x);
    int upperBound=findUpperBound(arr,n,x);
    vector<int>answer;
    if(lowerBound==n || arr[lowerBound]!=x){
        answer.push_back(-1);
        answer.push_back(-1);
    }else{
        answer.push_back(lowerBound);
        answer.push_back(upperBound-1);
    }
    return answer;
}
//Time complexity is O(n), Space complexity is O(1)
vector<int> firstAndLastOccuranceBrute(vector<int>&arr,int n,int x){
    vector<int>answer;
    int first=-1,last=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            if(first==-1) first=i;
            last=i;
        }
    }
    answer.push_back(first);
    answer.push_back(last);
    return answer;
}
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int>answer=firstAndLastOccuranceBrute(arr,n,x);
    cout<<answer[0]<<" "<<answer[1]<<endl;
    return 0;
}