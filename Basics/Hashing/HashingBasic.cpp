#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements of the array :" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Precompute frequencies
    int hash[13] = {0};
    for(int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;

    while(q--) {
        int number;
        cout << "Enter the number to check its frequency: ";
        cin >> number;

        // Fetch and display the frequency
        if (number >= 0 && number < 13) {
            cout << "Frequency of " << number << ": " << hash[number] << endl;
        } else {
            cout << number << " is out of range (0-12). Try again!" << endl;
        }
    }

    return 0;
}
