#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int num = n;
    int temp = n;
    int sum = 0;
    int digits = 0;
    while(temp>0){
        digits++;
        temp = temp/10;
    }
    while(n>0){
        int lastDigit = n%10;
        sum += pow(lastDigit,digits);
        n = n/10;
    }
    num == sum ? cout << "true" : cout << "false";
}