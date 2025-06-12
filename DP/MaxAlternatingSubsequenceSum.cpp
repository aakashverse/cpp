#include<bits/stdc++.h>
using namespace std;

// METHOD-1 => Rec + Memo // TC: O((2n+1)*2) = O(n)
    typedef long long ll;
    long long t[100001][2];
    
    ll solve(vector<int>&nums,int idx,bool flag){
        if(idx >= nums.size())
        return 0;

        if(t[idx][flag] != -1){
            return t[idx][flag];
        }

        ll skip = solve(nums,idx+1,flag);
        ll val  = (!flag)? -nums[idx]: nums[idx];
        ll take = val + solve(nums,idx+1,!flag);

        return t[idx][flag] = max(skip,take);

    }
    

    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        memset(t,-1,sizeof(t));
        return solve(nums,0,true);
    }

// Method-2 => Bottom Up // TC:O(n) // SC:O(n+1)*2 => O(n)
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<long long>>t(n+1,vector<long long>(2,0)); // 0:even, 1:odd

        for(int i=1;i<n+1;i++){
            t[i][0] = max(t[i-1][1] - nums[i-1], t[i-1][0]); // even case
            t[i][1] = max(t[i-1][0] + nums[i-1], t[i-1][1]); // odd case
        }

        return max(t[n][0],t[n][1]);
    }    