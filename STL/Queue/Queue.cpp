#include <bits/stdc++.h>
using namespace std;

void explainQueue(){
    queue<int> q;
    q.push(1); //{1}
    q.push(2); //{2}
    q.emplace(4); //{1,2,4}
    
    q.back() += 5;
    
    cout << q.back(); // here prints 9
    cout << q.front(); //prints 1
    q.pop(); // {2,9}
    cout << q.front(); //prints 2
}

int main() {
    explainQueue();
    return 0;
}