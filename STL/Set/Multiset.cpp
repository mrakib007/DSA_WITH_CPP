#include <bits/stdc++.h>
using namespace std;

void explainMultiSet() {
    multiset<int> ms;

    // Inserting elements
    ms.insert(1); // ms = {1}
    ms.insert(1); // ms = {1, 1}
    ms.insert(1); // ms = {1, 1, 1}
    // multiset allows duplicate values and stores them in sorted order.

    // Erase all occurrences of the element '1'
    ms.erase(1); // ms = {}
    // ms.erase(1) removes all occurrences of '1' from the multiset.
    // Time complexity: O(log N) for a single erase, O(ms.count(1) * log N) for all occurrences.

    // Re-insert for further demonstration
    ms.insert(1); // ms = {1}
    ms.insert(1); // ms = {1, 1}
    ms.insert(1); // ms = {1, 1, 1}

    // Count occurrences of '1'
    int count = ms.count(1); // count = 3
    // ms.count(1) returns the number of occurrences of '1' in the multiset.
    // Time complexity: O(log N) for each count.

    // Erase only one occurrence of '1'
    ms.erase(ms.find(1)); // ms = {1, 1}
    // ms.find(1) returns an iterator to the first occurrence of '1'.
    // ms.erase(ms.find(1)) erases only the first occurrence.
    // Time complexity: O(log N).

    // Erase a range of elements, in this case, two occurrences of '1'
    ms.erase(ms.find(1), ms.find(1) + 2); // ms = {}
    // ms.erase(ms.find(1), ms.find(1) + 2) removes two occurrences starting from the first '1'.
    // Time complexity: O(log N) for each element in the range.
}

void explainUnorderedSet() {
    unordered_set<int> st;

    // Insert elements
    st.insert(1); // st = {1}
    st.insert(2); // st = {1, 2}
    st.insert(3); // st = {1, 2, 3}
    // unordered_set does not allow duplicate elements and does not maintain any specific order.
    // Time complexity for insertion: Average O(1), worst-case O(N) due to hash collisions.

    // Check if an element exists
    if (st.find(2) != st.end()) {
        // Element '2' is found
    }
    // st.find(2) returns an iterator to the element if found; otherwise, returns st.end().
    // Time complexity: Average O(1), worst-case O(N).

    // Erase an element
    st.erase(2); // st = {1, 3}
    // st.erase(2) removes the element '2' from the unordered_set.
    // Time complexity: Average O(1), worst-case O(N) for hash collisions.

    // Count occurrences of an element (always 0 or 1 in unordered_set)
    int count = st.count(1); // count = 1
    int count2 = st.count(2); // count2 = 0
    // st.count(x) returns 1 if 'x' exists, otherwise 0.
    // Time complexity: Average O(1), worst-case O(N).
}

int main() {
    explainMultiSet();
    explainUnorderedSet();
    return 0;
}