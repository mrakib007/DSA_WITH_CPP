#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t>0){
        int n;
        cin >> n;
        for(int i=0;i<n;i++){
            for(char ch='A';ch<='A'+ n-i-1;ch++){
                cout << ch;
            }
            cout << endl;
        }

        for(int i=0;i<n;i++){
            char ch = 'A'+ i;
            for(int j=0;j<=i;j++){
                cout << ch;
            }
            cout << endl;
        }
        t--;
    }
}