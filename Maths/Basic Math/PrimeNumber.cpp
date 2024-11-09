#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 1) {
        cout << "Not Prime Number";
        return 0;
    }

    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            count++; 
            if (n / i != i) count++; 
        }
    }

    count == 2 ? cout << "Prime Number" : cout << "Not Prime Number";
    return 0;
}