#include<bits/stdc++.h>
using namespace std;

//It store data in key-value pair
//key should be unique
//It uses Red-Black Tree or AVL for Implementation
//Insertion,deletion and search operations have logarithmic time complexity
//(O(log n)) making them fast for most use cases.

int main()
{
    map<int,int>m;
    m.insert(make_pair(20,42));
    m.insert(make_pair(10,234));
    m.insert(make_pair(30,35));
    m.insert(make_pair(40,110));
    m.insert(make_pair(20,420));
    m[100]=353; //insert kar sakte ho value ko, update kar sakte h
    m[30]=70;
    
    // cout<<endl;
    // if(m.count(20))
    // cout<<m[20]<<" ";

    m.erase(30);  //delete operation

    for(auto it=m.begin();it!=m.end();it++)
    cout<<it->first<<" "<<it->second<<endl;

    


}