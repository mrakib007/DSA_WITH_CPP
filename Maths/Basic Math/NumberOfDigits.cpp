#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int original_n = n;
    
    int count = 0;
    while (n > 0) {
        int last_digit = n % 10; 
        cout << last_digit << endl;
        count++; 
        n = n / 10; 
    }
    
    int count2 = (int)(log10(original_n) + 1);
    cout << count2 << endl;

    return 0;
}
