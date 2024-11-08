#include <bits/stdc++.h>
using namespace std;

void explainMap() {
    // Declare different types of maps
    map<int, int> mpp; // A map with integer keys and integer values
    map<int, pair<int, int>> mpp_pair; // A map with integer keys and values as pairs of integers
    map<pair<int, int>, int> mpp_complex; // A map with pairs as keys and integer values

    // Insert elements in mpp
    mpp[1] = 2;           // mpp = { {1, 2} }
    mpp.emplace(3, 1);    // mpp = { {1, 2}, {3, 1} }
    mpp.insert({2, 4});   // mpp = { {1, 2}, {2, 4}, {3, 1} }

    // Inserting into mpp_complex where the key is a pair
    mpp_complex[{2, 3}] = 10; // mpp_complex = { { {2, 3}, 10 } }

    // Current state of mpp:
    // mpp = { {1, 2}, {2, 4}, {3, 1} }

    // Iterate over elements in mpp and print them
    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }
    // Output:
    // 1 2
    // 2 4
    // 3 1

    // Accessing elements using the [] operator
    cout << mpp[1] << endl; // Output: 2 (value associated with key 1)
    cout << mpp[5] << endl; // Output: 0 (key 5 does not exist, so it inserts with a default value of 0)

    // Find an element with a specific key
    auto it = mpp.find(3); // it is an iterator to the element with key 3
    if (it != mpp.end()) {
        cout << it->second << endl; // Output: 1 (value associated with key 3)
    }

    // Attempt to find a non-existent key
    it = mpp.find(5); // it will be equal to mpp.end() because key 5 does not exist

    // Using lower_bound and upper_bound
    auto lb = mpp.lower_bound(2); // lb points to the element with key >= 2
    if (lb != mpp.end()) {
        cout << lb->first << " " << lb->second << endl; // Output: 2 4
    }

    auto ub = mpp.upper_bound(3); // ub points to the element with key > 3
    if (ub != mpp.end()) {
        cout << ub->first << " " << ub->second << endl; // If it exists, shows key > 3 (but none exists here)
    }
}

int main() {
    explainMap();
    return 0;
}