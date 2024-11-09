#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) a = a % b;
        else b = b % a;
    }
    if (a == 0) return b;
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
}

// Time Complexity: O(log(min(a, b)))
// Explanation: This function uses the Euclidean algorithm, where each step reduces one of the numbers
// by taking the remainder (a % b or b % a). Each modulo operation effectively reduces the size
// of one of the numbers by a factor, leading to logarithmic behavior in terms of min(a, b).
// The time complexity of the Euclidean algorithm for GCD is O(log(min(a, b))), which is very efficient.
