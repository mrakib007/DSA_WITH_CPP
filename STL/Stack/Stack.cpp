#include<bits/stdc++.h>
using namespace std;

void explainStack(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.emplace(60);
    //{10,20,30,40,50,60};
    cout << st.top() << endl; // 60
    st.pop();
    cout << st.top() << endl; // 50
    cout << st.size() << endl; // 5
    cout << st.empty() << endl; // 0
    cout << st.size() << endl; // 5

    stack<int> st1,st2;
    st1.swap(st2);
}

int main(){
    explainStack();
    return 0;
}