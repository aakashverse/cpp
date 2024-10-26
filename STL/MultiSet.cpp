#include<bits/stdc++.h>
using namespace std;
// Duplicate elements are allowed
// sorted order me honge
// Implemented by Red-Black Tree/AVL Tree
int main()
{
    multiset<int>s;

    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(10);
    s.insert(50);

    for(auto it=s.begin();it!=s.end();it++)
    cout<<*(it)<<" ";


}