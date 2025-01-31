#include<iostream>
#include<vector>
using namespace std;

//Brute force approach. Time complexity is O(n+m) and space complexity is O(n+m)
void mergeSortArrayBrute(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> arr3(m + n);
    int left=0,right=0,index=0;

    while(left<m && right<n) {
        if(nums1[left]<=nums2[right]) {
            arr3[index]=nums1[left];
            left++,index++;
        } else {
            arr3[index]=nums2[right];
            right++,index++;
        }
    }

    while(left<m) arr3[index++]=nums1[left++];
    while(right<n) arr3[index++]=nums2[right++];

    for(int i=0;i<n+m;i++) nums1[i]=arr3[i];
}

int main() {
    int m,n;
    cout<<"Enter size of nums1 (excluding extra space): ";
    cin>>m;
    cout<<"Enter size of nums2: ";
    cin>>n;

    vector<int> nums1(m+n),nums2(n);
    
    cout<<"Enter elements of nums1 (only first "<<m<<" elements sorted, rest are 0s): ";
    for(int i=0;i<m;i++) cin>>nums1[i];
    for(int i=m;i<m+n;i++) nums1[i]=0; // Extra space initialized to 0

    cout<<"Enter elements of nums2 (sorted): ";
    for(int i=0;i<n;i++) cin>>nums2[i];

    mergeSortArrayBrute(nums1,m,nums2,n);

    cout<<"Merged Array: ";
    for(int num:nums1) cout<<num<<" ";
    cout<<endl;

    return 0;
}
