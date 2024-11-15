#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n) {
    cout << "The reversed array is : " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseArray(int arr[], int n) {
    int p = 0;
    int q = n - 1;
    while (p < q) {
        swap(arr[p], arr[q]);
        p++;
        q--; 
    }
    printArray(arr, n);
}

int main() {
    int n;
    cin >> n; 
    int newArr[n];
    for (int i = 0; i < n; i++) {
        cin >> newArr[i];
    }
    reverseArray(newArr, n);
    return 0;
}
