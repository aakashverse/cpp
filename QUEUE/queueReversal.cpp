#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={3,5,1,6,2};
    queue<int>q;
    //storing array elements into the queue
    for(int i=0;i<5;i++)
    {
        q.push(arr[i]);
    }

    stack<int>st;
    while(!q.empty())
    {
        st.push(q.front());
        q.pop();
    }

    while(!st.empty())
    {
       q.push(st.top());
       st.pop();
       cout<<q.front()<<" ";
       q.pop();
    }




}


