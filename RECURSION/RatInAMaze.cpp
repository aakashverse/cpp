#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool valid(int i,int j,int n)
{
    return i>=0 && j>=0 && i<n && j<n;
}

string totalpath(vector<vector<int>>&matrix,int i,int j,int n,string&path,vector<string>&ans,vector<vector<bool>>&visited)
{
    if(i==n-1 && j==n-1)
    {    
        ans.push_back(path);
        return;
    }
      visited[i][j]=1;
      int row[4]={-1,1,0,0};
      int col[4]={0,0,-1,1};
      string dir="UDLR";

      for(int k=0;k<4;k++)
    {
        if(valid(i+row[k],j+col[k],n) && matrix[i+row[k]][j+col[k]] && !visited[i+row[k]][j+col[k]])
        {
            path.push_back(dir[k]);
            return totalpath(matrix,i+row[k],j+col[k],n,path,ans,visited);
            path.pop_back();
        }
    }
         visited[i][j]=0;
      return ans;
}

int main()
{
    vector<vector<int>>matrix;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>matrix[i][j];
        }
        cout<<endl;
    }
    vector<vector<bool>>visited(4,vector<bool>(4,0));
    string path;
    vector<string>ans;
    //if(matrix[0][0]==0 || matrix[n-1][n-1]==0)
    cout<<totalpath(matrix,0,0,4,path,ans,visited)<<endl;
}