#include <bits/stdc++.h>
using namespace std;

// Comparator function for custom sorting of pairs
// Sorts pairs first by the second element in ascending order
// If the second elements are equal, sorts by the first element in descending order
bool comp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second < p2.second) return true;
    if (p1.second > p2.second) return false;
    // If second elements are the same, sort by the first element in descending order
    if (p1.first > p2.first) return true;
    return false;
}

void explainSorting() {
    int a[] = {5, 3, 2, 4, 1}; // Example array to be sorted
    int n = 5; // Size of the array

    // Basic sorting of array `a` in ascending order
    sort(a, a + n);
    // a becomes {1, 2, 3, 4, 5}

    vector<int> v = {5, 3, 2, 4, 1}; // Example vector to be sorted

    // Basic sorting of vector `v` in ascending order
    sort(v.begin(), v.end());
    // v becomes {1, 2, 3, 4, 5}

    // Sorting a specific range in array `a` (from index 2 to 3, inclusive)
    sort(a + 2, a + 4); 
    // Only elements at index 2 and 3 get sorted, so array `a` becomes {1, 2, 3, 4, 5}

    // Sorting the entire array `a` in descending order using `greater<int>` as a comparator
    sort(a, a + n, greater<int>());
    // a becomes {5, 4, 3, 2, 1}

    // Array of pairs to demonstrate custom sorting
    pair<int, int> pairs[] = {{1, 2}, {2, 1}, {4, 1}};
    int m = 3; // Number of pairs

    // Sort pairs array using custom comparator `comp`
    sort(pairs, pairs + m, comp);
    // After sorting, `pairs` becomes:
    // {{4, 1}, {2, 1}, {1, 2}} 
    // Explanation:
    // - Sorted by the second element in ascending order
    // - When the second element is the same, sorted by the first element in descending order

    // Counting the number of 1-bits in the binary representation of an integer
    int num = 7; // Binary: 111
    int cnt = __builtin_popcount(num); // cnt = 3 (three 1-bits in "111")

    // Counting the number of 1-bits in a large integer (long long)
    long long num2 = 1001121545265;
    int cnt2 = __builtin_popcountll(num2); // Count of 1-bits in the binary representation of `num2`

    // Permutations of a string
    string s = "123";
    string s2 = "321";

    // Sorting string `s2` to get all permutations in lexicographical order
    sort(s2.begin(), s2.end()); // s2 becomes "123"

    // Generating and printing all permutations of string `s`
    cout << "Permutations of '123':\n";
    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
    // Expected output:
    // 123
    // 132
    // 213
    // 231
    // 312
    // 321

    // Finding the maximum element in array `a`
    int maxi = *max_element(a, a + n);
    // maxi = 5 (maximum value in the array)
}

int main() {
    explainSorting();
    return 0;
}
