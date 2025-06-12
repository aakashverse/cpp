#include<bits/stdc++.h>
using namespace std;

// METHOD-1 => Top Down
    int t[1001][1001];
    int solve(vector<vector<int>>& pairs, int idx,int prevIdx){
        if(idx >= pairs.size())
        return 0;

        if(prevIdx != -1 && t[idx][prevIdx] != -1){
            return t[idx][prevIdx];
        }
        
        int take = 0;
        if(prevIdx == -1 || pairs[idx][0] > pairs[prevIdx][1]) 
        take = 1 + solve(pairs, idx+1, idx);

        int skip = solve(pairs, idx+1, prevIdx);
        if(prevIdx != -1) 
        return t[idx][prevIdx] = max(take, skip);

        return max(take, skip);
    }


    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end());
        memset(t, -1, sizeof(t));

        return solve(pairs,0,-1);
        
    }