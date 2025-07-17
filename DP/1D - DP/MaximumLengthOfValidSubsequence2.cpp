#include<bits/stdc++.h>
using namespace std;
// LC- 3202 specially made for bottom up

class Solution {
public:
    int maximumLength(vector<int>& nums, int k) {
        int n = nums.size();
        int res = 0;

        vector<vector<int>>dp(k,vector<int>(n,1));
        // k-rows for ()%k values i.e. upto k-1 values

        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                int mod = (nums[j] + nums[i])%k;
                dp[mod][i] = max(dp[mod][i],1+dp[mod][j]);
                res = max(res,dp[mod][i]);
            }
        }

        return res;
    }
};

// (sub[0]+sub[1])%2 ki values = 0,1
// (sub[0]+sub[1])%k  ki values = 0,1,2,3,4,5,...,k-1