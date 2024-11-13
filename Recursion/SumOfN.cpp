#include<bits/stdc++.h>
using namespace std;
void printSumWithParams(int i, int sum){
    if(i==0){
        cout << sum << endl;
        return;
    };
    printSumWithParams(i-1, sum+i);
}


int printSumWithOutParams(int n){
    if(n < 1) return 0;
    return n + printSumWithOutParams(n-1);
}

int factorial(int n){
    if(n==0) return 1;
    return n * factorial(n-1);
}

int main(){
    int n;
    cin >> n;
    printSumWithParams(n,0);
    cout << printSumWithOutParams(n) << endl;
    cout << factorial(n) << endl;

    return 0;
}