#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t>0){
        int n;
        cin >> n;
        for(int i=0;i<n;i++){
            for(char ch = 'E'-i; ch<='E'; ch++){
                cout << ch;
            }
            cout << endl;
        }
        t--;
    }
}