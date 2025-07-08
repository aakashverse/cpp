#include<bits/stdc++.h>
using namespace std;


    int row[4] = {-1,1,0,0};
    int col[4] = {0,0,-1,1};
    int n;
    int m;

    bool valid(int ni,int nj){
        return ni >= 0 && ni < n && nj >=0 && nj < m ;
    }

    int orangesRotting(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();

        queue<pair<int,int>>q;
        int minutes = -1;
        int fresh = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 2){
                    q.push({i,j});
                }
                else if(grid[i][j] == 1){
                    fresh++;
                }
            }
        }

        if(fresh == 0) return 0;

        while(!q.empty()){
            int size = q.size();
            while(size--){
                int i = q.front().first;
                int j = q.front().second;
                q.pop();

                for(int k=0;k<4;k++){
                    int ni = i + row[k];
                    int nj = j + col[k];

                    if(valid(ni,nj) && grid[ni][nj] == 1){
                        grid[ni][nj] = 2;
                        q.push({ni,nj});
                        fresh--;
                    }
                }
            }
            minutes++;
        }
        return  (fresh == 0)? minutes:-1;
    }