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
    
    //printing elements of the queue in --> O(n)
    /*while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }*/

   int n=q.size();
   //pinting all the elements of the queue in-->constant space
   while(n--)
   {
     cout<<q.front()<<" ";
     q.push(q.front());
     q.pop();
   }


}