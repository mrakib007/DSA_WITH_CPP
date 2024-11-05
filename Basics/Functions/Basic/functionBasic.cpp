#include <bits/stdc++.h>
using namespace std;

// void function doesn't return anything

// void printName()
// {
//     cout << "Hello" << endl;
// }

// void printName(string name)
// {
//     cout << name;
// }

int addNum(int a, int b)
{
    return a + b;
}

int minn(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    // printName();

    // string s;
    // cout << "Enter string: ";
    // cin >> s;
    // printName(s);

    int a, b;
    cin >> a >> b;
    int c = addNum(a, b);
    cout << c;

    int min = minn(a, b);
    cout << min;

    return 0;
}