#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age:" << endl;
    cin >> age;

    // if (age >= 18)
    // {
    //     cout << "You are adult" << endl;
    // }
    // else if (age >= 13)
    // {
    //     cout << "You are a teenager" << endl;
    // }
    // else
    // {
    //     cout << "You are not adult or teen ager" << endl;
    // }

    // cout << (age >= 18 ? "Adult" : (age >= 13 ? "Teenager" : "Not an adult or teenager")) << endl;

    cout << (age >= 18 ? "Adult" : (age >= 13 ? "Teenager" : (age > 1 && age <= 5 ? "Kid" : (age > 5 && age <= 12 ? "Child" : "Not an adult or teenager")))) << endl;

    return 0;
}