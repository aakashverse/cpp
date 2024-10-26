#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_multimap<int,int>m;
    m.insert(make_pair(20,42));
    m.insert(make_pair(10,234));
    m.insert(make_pair(30,35));
    m.insert(make_pair(40,110));
    m.insert(make_pair(20,352));
    
    m.erase(30);
    
    for(auto it=m.begin();it!=m.end();it++)
    cout<<it->first<<" "<<it->second<<endl;
}