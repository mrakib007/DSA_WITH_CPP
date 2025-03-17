//Hard Problem
#include<bits/stdc++.h>
using namespace std;
int maxPages(vector<int> pages,int n,int pageNum){
    int student=1,pagesForStudent=0;
    for(int i=0;i<n;i++){
        if(pagesForStudent+pages[i]<=pageNum){
            pagesForStudent+=pages[i];
        }else{
            student++;
            pagesForStudent=pages[i];
        }
    }
    return student;
}
//Optimized approach using binary search
//Time complexity : O(nlog(sum-max+1))
//Space complexity : O(1)
int findPageOptimized(vector<int>pages,int n,int k){
    if(n<k) return -1;
    int low=*max_element(pages.begin(),pages.end()),high=accumulate(pages.begin(),pages.end(),0);
    while(low<=high){
        int mid=low+(high-low)/2;
        int countStudent=maxPages(pages,n,mid);
        if(countStudent>k){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return low;
}
//Brute force solution
//Time complexity : O(sum-max+1)*n
//Space complexity : O(1)
int findPagesBrute(vector<int> pages,int n,int k){
    if(n<k) return -1;
    int low=*max_element(pages.begin(),pages.end());
    int high=accumulate(pages.begin(),pages.end(),0);
    for(int pageNum=low;pageNum<=high;pageNum++){
        int countStudent=maxPages(pages,n,pageNum);
        if(countStudent==k) return pageNum;
    }
    return -1;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> pages(n);
    for(int i=0;i<n;i++) cin>>pages[i];
    int ans=findPagesBrute(pages,n,k);
    cout<<ans<<endl;
    return 0;
}