#include<bits/stdc++.h>
using namespace std;

void explainVector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    
    vector<pair<int,int>> vec;
    vec.push_back({1,2}); //the inputs should be like {1,2}
    vec.emplace_back(1,2);// it itself figures out 1,2 as inputs
    
    vector<int> v2(5,100);//here it contains 5 elemnts with the value 100.
    vector<int> v3(5);//container with 5 instances with 0 or garbage values are created.
    vector<int> v4(v2);//it is a container of the copy of v2. Hence it has same number of values.
    
    cout << v[0]; //print element. 
    
    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it); //here * prints the values. otherwise begin points to the memory address. So if we don't use * it will be giving us memory address when we print it.
    
    it =it+2;
    cout << *(it) << "";
    
    vector<int>::iterator it = v.end();//here end will be pointing to an address just after the values end so we can access values with it--. 
    cout<<v.back()<<"";
    
    for(vector<int>::iterator it = v.begin(); it!=v.end();it++){
        cout << *(it) << " ";//printing values with loop using vector.
    }
    for(auto it = v.begin(); it!=v.end();it++){
        cout << *(it); << " ";
    } //with auto, the data type is automatically decided by the device and it itself assigns values as a vector.
    for(auto it: v){
        cout << it << "";
    }
    v.erase(v.begin()+1);
    //10,20,12,23,35
    v.erase(v.begin()+2,v.begin()+4); 
    // remains {10,20,30} [start,end]

    vector<int>v(2,100); //{100,100}
    v.insert(v.begin(),300); //{300,100,100}
    v.insert(v.begin() + 1,2,400); // {300,400,400,100,100}

    vector<int>copy(2,50); // {50,50}
    v.insert(v.begin(),copy.begin(),copy.end()); // {50,50,300,400,400,100,100}
    
    cout << v.size();

    v.pop_back(); //removes the last element

    v2.swap(v3); //swaps v2 and v3

    v.clear(); //removes all the elements

    cout << v.empty(); //checks if the vector is empty
}

int main(){
    explainVector();
    return 0;
}