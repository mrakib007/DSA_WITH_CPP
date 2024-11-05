#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t>0){
        int n;
        cin >> n;
        int space = 2*n-2;
        for(int i=1;i<=2*n-1;i++){
            int stars = i;
            if(i > n) stars = 2*n-i;
            for(int j=1;j<=stars;j++){
                cout << "*";
            }
            for(int j=0;j<space;j++){
                cout << " ";
            }
            for(int j=1;j<=stars;j++){
                cout << "*";
            }
            cout << endl;
            i < n ? space = space - 2 : space = space + 2;
        }
        t--;
    }
}