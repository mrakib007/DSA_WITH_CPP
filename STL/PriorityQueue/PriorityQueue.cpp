#include <bits/stdc++.h>
using namespace std;

void explainPriorityQueue(){
    priority_queue<int> pq;
    // The biggest value stays at the top
    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}
    
    cout << pq.top(); // 10
    pq.pop();
    cout << pq.top(); // 8
    
    // Min-heap using priority_queue (smallest value stays at the top)
    priority_queue<int, vector<int>, greater<int>> min_pq;
    min_pq.push(5); // {5}
    min_pq.push(2); // {2, 5}
    min_pq.push(8); // {2, 5, 8}
    min_pq.emplace(10); // {2, 5, 8, 10}
    
    cout << min_pq.top(); // 2
}

int main() {
    explainPriorityQueue();
    return 0;
}