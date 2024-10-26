#include<bits/stdc++.h>
using namespace std;

/*void permut(int arr[],vector<vector<int>>&ans,vector<int>&temp,vector<bool>&visited)
{
    //base condition
    if(visited.size()==temp.size())
    {
        ans.push_back(temp);
        return;
    }

    for(int i=0; i<visited.size(); i++)
    {
        if(visited[i]==0)
        {
            visited[i]=1;
            temp.push_back(arr[i]);
            permut(arr,ans,temp,visited);
            visited[i]=0;
            temp.pop_back();
        }
    }
}

int main()
{
    int arr[]={1,2,3,3};
    vector<vector<int>>ans;
    vector<int>temp;
    vector<bool>visited(3,0);
    permut(arr,ans,temp,visited);
    
    for(int i=0; i<ans.size(); i++)
    {
        for(int j=0; j<ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
           
        }
         cout<<endl;
    }
}*/

                     //OPTIMISED WAY --> without using temp & visited i.e. extra space

    void permut(vector<int>&arr,int index,int n,vector<vector<int>>&ans)
    {
        if(index==arr.size())
        {
            ans.push_back(arr);
            return;
        }

        for(int i=index; i<arr.size(); i++)
        {
            swap(arr[i],arr[index]);
            permut(arr,index+1,n,ans);
            swap(arr[i],arr[index]);
        }
    }

    int main()
    {
        //int arr[]={1,2,3};
        vector<int>arr(3);
        vector<vector<int>>ans;
        cout<<"Input Array: ";
        for(int i=0; i<arr.size();i++)
        {
            cin>>arr[i];
           
        }
        permut(arr,0,3,ans);
        cout<<"Possible Permutations:"<<endl;
        for(int i=0; i<ans.size(); i++)
       {
           for(int j=0; j<ans[i].size(); j++)
          {
            cout<<ans[i][j]<<" "; 
          }
         cout<<endl;
       }
        //in output array is extra printed?
    }                 