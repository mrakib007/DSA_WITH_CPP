#include<bits/stdc++.h>
using namespace std;
//Optimized approach. Time complexity is O(2nlogn), Space complexity is O(n). Adn we end up distorting the original array.
void merge(vector<int> &arr,int low,int mid,int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right <=high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
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
}
int countPairs(vector<int>&arr,int low,int mid,int high){
    int right=mid+1;
    int count=0;
    for(int i=low;i<=mid;i++){
        while(right<=high && arr[i]>2LL*arr[right]) right++;
        count=count+(right-(mid+1));
    }
    return count;
}
int mergeSort(vector<int> &arr,int low,int high){
    int count=0;
    if(low>=high) return count;
    int mid = (low+high)/2;
    count+=mergeSort(arr,low,mid);
    count+=mergeSort(arr,mid+1,high);
    count+=countPairs(arr,low,mid,high);
    merge(arr,low,mid,high);
    return count;
}
//Brute force approach. Time complexity is O(n^2), Space complexity is O(1)
int reversePairsBrute(vector<int>arr,int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>2LL*arr[j]) count++;
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int answer=reversePairsBrute(arr,n);
    cout<<answer<<endl;
    return mergeSort(arr,0,n-1);
}