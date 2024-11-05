#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t > 0) {
        int n;
        cin >> n;
        int space = 0; 

        for (int i = 0; i < n; i++) {
            for (int j = 1; j <= n - i; j++) {
                cout << "*";
            }
            for (int j = 0; j < space; j++) {
                cout << " ";
            }
            for (int j = 1; j <= n - i; j++) { 
                cout << "*";
            }
            cout << endl;
            space += 2;
        }

        space = 2 * n - 2; 


        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                cout << "*";
            }
            for (int j = 0; j < space; j++) {
                cout << " ";
            }
            for (int j = 0; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
            space -= 2;
        }

        t--; 
    }
    return 0;
}
