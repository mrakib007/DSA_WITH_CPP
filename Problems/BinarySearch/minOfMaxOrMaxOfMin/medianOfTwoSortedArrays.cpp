#include<bits/stdc++.h>
using namespace std;
//Brute force approach.
//Time complexity: O(n1+n2);
//Space complexity: O(n1+n2);
double findMedianSortedArraysBrute(vector<int>& nums1, vector<int>& nums2) {
    int n1=nums1.size();
    int n2=nums2.size();
    vector<int>nums3;
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(nums1[i]<nums2[j]){
            nums3.push_back(nums1[i++]);
        }else{
            nums3.push_back(nums2[j++]);
        }
    }
    while(i<n1){
        nums3.push_back(nums1[i++]);
    }
    while(j<n2){
        nums3.push_back(nums2[j++]);
    }
    int n=nums3.size();
    if (n % 2 == 1) return nums3[n / 2];
    return (nums3[n / 2] + nums3[n / 2 - 1]) / 2.0;

}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    vector<int>arr1(n1);
    vector<int>arr2(n2);
    for(int i=0;i<n1;i++) cin>>arr1[i];
    for(int i=0;i<n2;i++) cin>>arr2[i];
    double median=findMedianSortedArraysBrute(arr1,arr2);
    cout<<median;
}