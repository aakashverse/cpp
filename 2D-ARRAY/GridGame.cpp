#include<bits/stdc++.h>
using namespace std;

//LC-2017. Grid Game

long long gridGame(vector<vector<int>>& grid) {
    long long topsum=0;
    for(int i=0;i<grid[0].size();i++){
        topsum += grid[0][i];
    }
        
    long long botsum=0;
    long long result=LONG_MAX;
    for(int j=0;j<grid[0].size();j++){
        topsum -= grid[0][j];
        result = min(result, max(topsum,botsum));
        botsum += grid[1][j];
    }
    return result;
}

