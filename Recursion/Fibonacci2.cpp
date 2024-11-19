#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n <= 1) cout << 1;
    int first = 0;
    int second = 1;
    for(int i=2;i<=n;i++){
        int current = first + second;
        first = second;
        second = current;
        cout << current << " ";
    }
    return 0;
}