#include<bits/stdc++.h>
using namespace std;
                            /*Also known as JOSEPHUS Problem*/
                            
/*int winner(vector<bool>&person,int n,int index,int personleft,int k)
{  //Time complexity--> O(n^2 & Space compexity--> O(n))
    if(personleft==1)
    {
        for(int i=0;i<n;i++)
        {
            if(person[i]==0)
            return 1;
        }
    }

    //find the position kill
    int kill=(k-1)%personleft;
    while(kill--)
    {
      index=(index+1)%n;
      while(person[index]==1)
      {
        index=(index+1)%n;
      }
    }
    
    person[index]=1;
    //next alive person
    while(person[index]==1)
    {
        index=(index+1)%n;
    }
   return winner(person,n,index,personleft-1,k);
}

int main()
{
  vector<bool>person(6,0);
  cout<<winner(person,6,0,6,3);
}*/

int winner(int n,int k)
{//optimised code with Tc=O(n) & Sc=O(n)
  if(n==1)
    return 0;
    return (winner(n-1,k)+k)%n;
}

int main()
{
  cout<<winner(5,3)<<endl;
}