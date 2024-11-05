#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t>0){
        int n;
        cin >> n;
        for(int i=0; i<n;i++){
            int num;
            num = i%2 == 0 ? 1 : 0;
            for(int j=0;j<=i;j++){
                cout << num;
                num = 1 - num;
            }
            cout << endl;   
        }
        t--;
    }
    return 0;
}