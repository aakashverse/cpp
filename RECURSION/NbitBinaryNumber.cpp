#include<bits/stdc++.h>
#include<vector>
using namespace std;

void find(int N,vector<string>&ans,string &temp,int zero,int one)
{
   //base case
   if(temp.size()==N)
   {
    ans.push_back(temp);
    return;
   }

   //adding zero
   if(zero<one)
   {
    temp.push_back('0');
    find(N,ans,temp,zero+1,one);
    temp.pop_back();
   }

   //adding one
    temp.push_back('1');
    find(N,ans,temp,zero,one+1);
    temp.pop_back();
}


int main()
{
    int N;
    cout<<"Enter a number: ";
    cin>>N;
    vector<string>ans;
    string temp;
    cout<<find(N,ans,temp,0,0)<<endl;

}