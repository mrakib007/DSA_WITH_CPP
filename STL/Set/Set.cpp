#include<bits/stdc++.h>
using namespace std;
//Set is a collection of unique elements
//It stores in sorted order

void explainSet(){
    set<int> st;
    st.insert(1); //{1}
    st.insert(2); //{1,2}
    st.insert(2); //{1,2} it is not inserted as 2 is already present
    st.insert(4); //{1,2,4}
    st.insert(3); //{1,2,3,4}
    //{1,2,3,4}
    auto it = st.find(3); //it will point to 3. it points to the address of 3
    auto it = st.find(6); //it will point to right after the end as it is not present in the set. 
    st.erase(4);
    //{1,2,3}

    int cnt = st.count(1); // 1
    int cnt = st.count(6); // 0

    auto it = st.find(3);
    st.erase(it);

    //{1,2,3,4,5}
    auto it1 = st.find(1); //it will point to 1
    auto it2 = st.find(4); //it will point to 4
    st.erase(it1, it2);  //{4,5}

    auto it = st.lower_bound(3); //it will point to 3
    auto it = st.upper_bound(3); //it will point to 4

}
int main(){
    explainSet();
}