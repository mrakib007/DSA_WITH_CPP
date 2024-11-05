#include <bits/stdc++.h>
using namespace std;
// here the value of num is passed by value. Here num = 10 will not be changed
//  void doSomething(int num){
//      cout << num << endl;
//      num += 10;
//      cout << num << endl;
//      num += 10;
//      cout << num << endl;
//  }

// here the value of s is passed by reference. Here s = "Hello World!" will be changed
//  void doSomething(string &s){
//      cout << s << endl;
//      s[0] = 'S';
//      cout << s << endl;
//  }

void  doSomething(int arr[], int n){
    arr[0] += 10;
    cout << arr[0] << "value inside function" << endl;
}
//array is passed by reference, always.
int main()
{
    // int num = 10;
    // doSomething(num);
    // cout << num << endl;

    // string s = "Hello World!";
    // doSomething(s);
    // cout << s << endl;

    int n = 5;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    doSomething(arr, n);

    cout << arr[0] << "value inside int main" << endl;
    return 0;
}
