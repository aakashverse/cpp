#include<bits/stdc++.h>
using namespace std;

//It contains only unique elements
//Search,insert & delete have avg. constant time complexity O(1)
//It uses hashing technique to achieve it
int main()
{
    unordered_set<int>s;
    //unordered_multiset<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(15);
    s.insert(11);
    s.insert(10);

    for(auto it=s.begin();it!=s.end();it++)
    cout<<*it<<" ";
    
}

//set, multiset,unorederd_set,unordered_multiset
//set: unique element, stored
//multiset: sorted
//unordered_set: unique & random
//Unordered_multiset: not unique & random