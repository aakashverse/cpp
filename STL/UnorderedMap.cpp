#include<bits/stdc++.h>
using namespace std;

// Unque keys are present, duplicates are not allowed
// Not necessary it should be in sorted form
// Hashing 
// insert, search, delete constant time exeution

int main()
{
    unordered_map<int,int>m;
    m.insert(make_pair(20,42));
    m.insert(make_pair(10,234));
    m.insert(make_pair(30,310));
    m.insert(make_pair(40,110));
    m.insert(make_pair(20,42));
    m[20]=69;

    for(auto it=m.begin();it!=m.end();it++)
    cout<<it->first<<" "<<it->second<<endl;
}