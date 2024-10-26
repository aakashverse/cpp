#include<bits/stdc++.h>
using namespace std;

void genParanthesis(int n,int left,int right,vector<string>&ans,string &temp)
{
    if(left+right==2*n)
    {
    ans.push_back(temp);
    return;
    }

    //left paranthesis
    if(left<n)
    {
    temp.push_back('(');
    genParanthesis(n,left+1,right,ans,temp);
    temp.pop_back();
    }
    //right paranthesis
    if(right<left)
    {
    temp.push_back(')');
    genParanthesis(n,left,right+1,ans,temp);
    temp.pop_back();
    }
    
}

int main()
{
   vector<string>ans;
   string temp;
   genParanthesis(3,0,0,ans,temp);
   for(int i=0; i<ans.size(); i++)
   {
    cout<<ans[i]<<endl;
   }
}