#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<int> vec;
    cin >> n;
    // for(int i=1;i<=n;i++){
    //     if(n%i==0) cout << i << " ";
    // }

    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            vec.push_back(i);
            if(n/i != i) vec.push_back(n/i);
        }
    }
    sort(vec.begin(), vec.end());
    for(auto it : vec) cout << it << " ";
}