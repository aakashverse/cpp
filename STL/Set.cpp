#include<bits/stdc++.h>
using namespace std;
// It stores only unique value
// It stores in sorted(Ascending) Order
// Insert,delete & search--> O(logn)
// Implemented by using Red-Black Tree/ AVL Tree
// We can sort in descending order using greater<Type>
int main()
{
    set<int,greater<int>>s;
    //create
    s.insert(12);
    s.insert(20);
    s.insert(10);
    s.insert(110);
    //delete
    s.erase(110);

    for(auto it=s.begin();it!=s.end();it++)
    cout<<*(it)<<" "<<endl;

    //find
    if(s.find(110)!=s.end())
    cout<<"Present";
    else
    cout<<"Absent";

    //count, count of that number
    if(s.count(10))
    cout<<"\nPresent";
    else
    cout<<"\nAbsent";
}
    