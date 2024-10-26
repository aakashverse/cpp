#include<bits/stdc++.h>
using namespace std;

void permut(vector<int>&arr,int index,vector<vector<int>>&ans)
{

       if(index==arr.size())
       {
        ans.push_back(arr);
        return;
       }
        
        vector<bool>use(21,0);
        for(int i=index; i<arr.size();i++)
       {
         if(use[arr[i]+10]==0)
         {
           swap(arr[index],arr[i]);
           permut(arr,index+1,ans);
           swap(arr[index],arr[i]);
           use[arr[i]+10]=1;
         }   
       } 
}

    int main()
{
     vector<int>arr(3);
     cout<<"Input Array: ";
     for(int i=0; i<arr.size(); i++)
     {
        cin>>arr[i];
     }
     vector<vector<int>>ans;
     permut(arr,0,ans);
     cout<<"Possible Permutations:"<<endl;
     for(int i=0; i<ans.size();i++)
     {
        for(int j=0; j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
     }
}