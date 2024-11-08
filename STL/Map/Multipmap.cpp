#include <bits/stdc++.h>
using namespace std;

// Function to explain and demonstrate multimap
void explainMultimap() {
    // Multimap: allows duplicate keys and stores elements in sorted order by key
    multimap<int, string> mmp;

    // Inserting elements into multimap
    mmp.insert({1, "apple"});
    mmp.insert({2, "banana"});
    mmp.insert({1, "cherry"}); // duplicate key allowed
    mmp.insert({3, "date"});

    // Printing elements of multimap
    cout << "Multimap elements:\n";
    for (const auto &pair : mmp) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }

    // Finding elements with a specific key using equal_range
    cout << "\nElements with key 1:\n";
    // equal_range returns a pair of iterators:
    //   - The first iterator points to the first element with the specified key
    //   - The second iterator points to the position just after the last element with that key
    // This allows us to iterate over all elements with the specified key in one go
    auto range = mmp.equal_range(1);
    for (auto it = range.first; it != range.second; ++it) {
        cout << "Key: " << it->first << ", Value: " << it->second << endl;
    }

    // Time complexity:
    // Insertion: O(log N) per element
    // Deletion: O(log N) for a specific key
    // Access: O(log N) for a specific key
}

// Function to explain and demonstrate unordered_map
void explainUnorderedMap() {
    // Unordered_map: does not allow duplicate keys and stores elements in an arbitrary order
    unordered_map<int, string> ump;

    // Inserting elements into unordered_map
    ump[1] = "apple";
    ump[2] = "banana";
    ump[3] = "cherry";
    ump[4] = "date";

    // Trying to insert a duplicate key (overwrites existing value)
    ump[1] = "apricot"; // key 1 is overwritten with "apricot"

    // Printing elements of unordered_map
    cout << "\nUnordered Map elements:\n";
    for (const auto &pair : ump) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }

    // Finding an element by key
    int key = 2;
    if (ump.find(key) != ump.end()) {
        cout << "\nKey " << key << " found with value: " << ump[key] << endl;
    } else {
        cout << "\nKey " << key << " not found in unordered_map.\n";
    }

    // Time complexity:
    // Insertion: Average O(1), worst case O(N) for hash collisions
    // Deletion: Average O(1), worst case O(N)
    // Access: Average O(1), worst case O(N)
}

int main() {
    explainMultimap();
    explainUnorderedMap();
    return 0;
}
