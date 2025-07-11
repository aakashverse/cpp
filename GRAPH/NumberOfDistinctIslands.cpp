#include<bits/stdc++.h>
using namespace std;

    int row[4] = {-1,1,0,0};
    int col[4] = {0,0,-1,1};

    vector<pair<int,int>> bfs(int i,int j,vector<vector<int>>&grid,vector<vector<bool>>&visited){
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<int,int>>q;
        q.push({i,j});
        visited[i][j] = 1;
        vector<pair<int,int>>shape;
        shape.push_back({0,0});

        while(!q.empty()){
            int i = q.front().first;
            int j = q.front().second;
            q.pop();

            for(int k=0;k<4;k++){
                int ni = i + row[k];
                int nj = j + col[k];

                if((ni>=0 && ni<n && nj>=0 && nj<m) && !visited[ni][nj] && grid[ni][nj] == 1){
                    visited[ni][nj] = 1;
                    q.push({ni,nj});
                    shape.push_back({ni-i,nj-j});
                }
            }
        }
        return shape;
    }

    int countDistinctIslands(vector<vector<int>> &grid){
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>>visited(n,vector<bool>(m,0));
        set<vector<pair<int,int>>>UnqShapes;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 1 & !visited[i][j]){
                    vector<pair<int,int>>shape = bfs(i,j,grid,visited);
                    sort(shape.begin(),shape.end());
                    UnqShapes.insert(shape);
                }
            }
        }

        return UnqShapes.size();
    }


int main(){
    
    vector<vector<int>>grid = {{1, 1, 0, 1, 1}, {1, 0, 0, 0, 0}, {0, 0, 0, 0, 1}, {1, 1, 0, 1, 1}};
    
    cout<<countDistinctIslands(grid)<<endl;
}