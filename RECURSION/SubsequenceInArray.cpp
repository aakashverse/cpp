#include<bits/stdc++.h>
using namespace std;
    //SUBSEQUENCE==POWER SET(2^n)
void subsequence(int arr[],int index,int n,vector<vector<int>>&ans,vector<int>temp)
{
    if(index==n)
    {
        ans.push_back(temp);
        return;
    }
    //Not Included
    subsequence(arr,index+1,n,ans,temp);
    //Included
    temp.push_back(arr[index]);
    subsequence(arr,index+1,n,ans,temp);
}

int main()
{
    int arr[3]={1,2,3};
    vector<vector<int>>ans;  //2-D vector(array)
    vector<int>temp; //1-D vector(array)
    subsequence(arr,0,3,ans,temp);
    for(int i=0; i<ans.size(); i++)
    {
       for(int j=0; j<ans[i].size(); j++)
       {
       cout<<ans[i][j]<<" ";
       }
       cout<<endl;
    }
}