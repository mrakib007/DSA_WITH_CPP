#include <bits/stdc++.h>
using namespace std;
int main() {
    int n1, n2;
    cin >> n1 >> n2;
    int gcd = 1;

    // first solution
    // for (int i = 1; i <= min(n1, n2); i++) {
    //     if (n1 % i == 0 && n2 % i == 0) gcd = i;
    // }
    // Time Complexity: O(min(n1, n2))
    // Explanation: This solution iterates from 1 up to min(n1, n2), checking if each `i` is a divisor of both `n1` and `n2`.
    // As a result, it has a linear time complexity in terms of the smaller of the two numbers.

    // second solution
    for (int i = min(n1, n2); i > 0; i--) {
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
            break;
        }
    }
    // Time Complexity: O(min(n1, n2))
    // Explanation: This solution iterates in reverse from min(n1, n2) down to 1, finding the first common divisor of n1 and n2.
    // It will usually be faster in practice, as it stops as soon as it finds the greatest common divisor, but the worst-case complexity is still O(min(n1, n2)).

    cout << gcd << endl;
    return 0;
}
