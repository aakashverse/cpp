#include<bits/stdc++.h>
using namespace std;
//doubly-linked list
int main()
{
    list<int>l1;
    l1.push_back(12);
    l1.push_back(22);
    l1.push_front(42);
    l1.push_front(52);
    cout<<l1.front()<<endl;
    cout<<l1.back()<<endl;
    l1.pop_back();
    l1.pop_front();
    
    for(auto it=l1.rbegin();it!=l1.rend();it++)  //in reverse manner use r
    {
        cout<<*(it)<<" ";
    }

}