#include<bits/stdc++.h>
using namespace std;  
//Optimized approach. Time complexity is O(nlogn) and space complexity is O(n)
int merge(vector<int> &arr,int low,int mid,int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    int count=0;
    while(left<=mid && right <=high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            count=count+(mid-left+1);
            right++;
        }
    }

    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low;i<=high;i++){
        arr[i] = temp[i-low];
    }
    return count;
}
int mergeSort(vector<int> &arr,int low,int high){
    int count=0;
    if(low>=high) return count;
    int mid = (low+high)/2;
    count+=mergeSort(arr,low,mid);
    count+=mergeSort(arr,mid+1,high);
    count+=merge(arr,low,mid,high);
    return count;
}
    int inversionCount(vector<int> &arr) {
        int n=arr.size();
        return mergeSort(arr,0,n-1);
    }
//Brute force approach. Time complexity is O(n^2) and space complexity is O(1)
int countInversionBrute(vector<int>arr,int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]) count++;
        }
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int answer =countInversionBrute(arr,n);
    cout<<answer;
    return 0;
}