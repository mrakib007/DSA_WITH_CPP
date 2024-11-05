#include<bits/stdc++.h>
using namespace std;

void explainList(){
    list<int> ls;

    ls.push_back(2); // {2}
    ls.emplace_back(3); // {2,3}
    ls.push_front(1); // {1,2,3}
    ls.emplace_front(5); // {5,1,2,3}

    deque<int>dq;
    dq.push_back(2); // {2}
    dq.emplace_back(3); // {2,3}
    dq.push_front(1); // {1,2,3}
    dq.emplace_front(5); // {5,1,2,3}

    dq.pop_back(); // {5,1,2}
    dq.pop_front(); // {1,2}

    dq.back(); // 2
    dq.front(); // 1
}

int main(){
    explainList();
    return 0;
}