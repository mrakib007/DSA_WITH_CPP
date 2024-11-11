#include<bits/stdc++.h>
using namespace std;
void recursionPrinter(int i, int n){
    // if(i>n) return;
    // cout << i << " ";
    // recursionPrinter(i+1,n);

    if(i<1) return;
    cout << i << " ";
    recursionPrinter(i-1,n);
}
int main(){
    int n;
    cin >> n;
    int i = n;
    // recursionPrinter(1,n);
    recursionPrinter(i,n);
}