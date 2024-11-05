#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t>0){
        int n;
        cin >> n;
        for(int i=0;i<2*n-1;i++){
            int stars = i<=n ? i : 2*n-i-1;
            for(int j=0; j<stars; j++){
                cout << "*";
            }
            cout << endl;
        }
        t--;
    }
    return 0;
}