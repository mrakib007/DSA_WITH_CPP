#include <bits/stdc++.h>
using namespace std;

int counter = 0;

void recursiveFunction() {
    if (counter == 5) return;
    cout << counter << endl;
    counter++;
    recursiveFunction();
}

int main() {
    recursiveFunction();
    return 0;
}