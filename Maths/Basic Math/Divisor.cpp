#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<int> vec;
    cin >> n;
    // for(int i=1;i<=n;i++){
    //     if(n%i==0) cout << i << " ";
    // }

    //instead of sqrt() function it's good to use i*i as the function is in built in c++ it will take more time.
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            vec.push_back(i);
            if(n/i != i) vec.push_back(n/i);
        }
    }
    sort(vec.begin(), vec.end());
    for(auto it : vec) cout << it << " ";
}