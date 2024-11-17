#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s){
    int start = 0;
    int end = s.length() - 1;
    while(start<end){
        if(s[start] != s[end]) return false;
        start++;
        end--;
    }
    return true;
}
int main(){
    string s;
    cin >> s;
    bool ans = isPalindrome(s);
     if (ans == true) {
    cout << "Palindrome";
  } else {
    cout << "Not Palindrome";
  }
    return 0;
}