#include<bits/stdc++.h>
using namespace std;

    int n;
    int m;
    int row[4]={-1,1,0,0};
    int col[4]={0,0,-1,1};
    
    bool valid(int r,int c){
        return r>=0&&r<n&&c>=0&&c<m;
    }
  
    bool DFS(int i,int j,int k,vector<vector<char>>&mat,vector<vector<bool>>&visited,string &word){
        if(k==word.size()) return true;
        visited[i][j]=1;
        
        bool found=false;
        
        for(int w=0;w<4;w++){
            int r=i+row[w];
            int c=j+col[w];
            
            if(valid(r,c) && visited[r][c]==0 && word[k]==mat[r][c])
            found=found | DFS(r,c,k+1,mat,visited,word);
        }
        
        visited[i][j]=0; //backtrack
        return found;
    }
  
  
    bool isWordExist(vector<vector<char>>& mat, string& word) {
        // Code here
        n=mat.size();
        m=mat[0].size();
        
        vector<vector<bool>>visited(n,vector<bool>(m,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==word[0]){
                    bool found=DFS(i,j,1,mat,visited,word);
                    if(found) return true;
                }
            }
        }
        
        return false;
    }