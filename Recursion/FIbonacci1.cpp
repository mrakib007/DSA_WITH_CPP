#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n == 0){
        cout << 0 << endl;
    }else if(n == 1){
        cout << 1 << endl;
    }else{
        int fib[n+1];
        fib[0] = 0;
        fib[1] = 1;
        for(int i=2;i<=n;i++){
            fib[i] = fib[i-1] + fib[i-2];
        }
        for(int i=0;i<=n;i++){
            cout << fib[i] << " ";
        }
    }
}