#include<bits/stdc++.h>
using namespace std;

int display(queue<int>q)
{
    while(!q.empty())
    {
        if(q.front()<0)
        return q.front();
        q.pop();
    }
    return 0; 
}
int main()
{
    int A[]={2,-3,-4,-2,7,8,9,-10};
    int n=8,k=3;
    queue<int>q;
    
    for(int i=0;i<k-1;i++)
    q.push(A[i]);
    
    vector<int>ans;

    for(int i=k-1;i<n;i++)
    {
        q.push(A[i]);
        ans.push_back(display(q));
        q.pop();
    }

    return display(q);
}