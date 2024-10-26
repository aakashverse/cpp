#include<bits/stdc++.h>
using namespace std;

int main()
{
    // priority_queue<int>p;  // MAX HEAP

    priority_queue<int, vector<int>, greater<int>>p;  // MIN HEAP

    p.push(3);
    p.push(10);
    p.push(18);
    p.push(11);
    p.push(20);
    p.push(10);
    
    cout<<p.top()<<endl;
    
    p.pop();

    cout<<p.size()<<endl;

    while(!p.empty())
    {
        cout<<p.top()<<" ";
        p.pop();
    }
}