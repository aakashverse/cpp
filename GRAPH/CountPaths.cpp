#include<bits/stdc++.h>
using namespace std;

    int dfs(int node,unordered_map<int,vector<int>>&adj,int dest,vector<int>&dp){
        if(node == dest) return 1;
        
        if(dp[node] != -1)
        return dp[node];
        
        int count = 0;
        for(int neighbour:adj[node]){
            count += dfs(neighbour,adj,dest,dp);
        }
        
        return dp[node] = count;
    };

    int main(){

        int countPaths(vector<vector<int>>& edges, int V, int src, int dest){
            unordered_map<int,vector<int>>adj;
            vector<int>dp(V,-1);
            for(int i=0;i<edges.size();i++){
                int u = edges[i][0];
                int v = edges[i][1];
            
                adj[u].push_back(v);
            }
        
            return dfs(src,adj,dest,dp);
        }
         
    }