#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t>0){
        int n;
        cin >> n;
        for(int i=1;i<=n;i++){
            for(char ch='A';ch<'A'+i;ch++){
                cout << ch << " ";
            }
            cout << endl;
        }
        t--;
    }
    return 0;
}