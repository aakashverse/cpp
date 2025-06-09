#include<bits/stdc++.h>
using namespace std;

// Method-1 => TOP DOWN (Recursion + Memorization)

    int money(vector<int>&nums,int idx,vector<int>&dp){
        if(idx >= nums.size()){
            return 0;
        }

        if(dp[idx] != -1)
        return dp[idx];
        
        int steal = nums[idx] + money(nums,idx+2,dp); // steal from current house and move to adjacent+1 house
        int skip  = money(nums,idx+1,dp); // skip current house and move just its adjacent house
        
        return dp[idx] = max(steal,skip);
     
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        int ans = 0,temp = 0;
        vector<int>dp(n,-1);
        return money(nums,0,dp);
    }

// Method-2 => BOTTOM UP
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>t(n+1);

        t[0] = 0; // 0-house, no profit
        t[1] = nums[0]; // 1 house, nums[0] profit
        
        for(int i=2;i<=n;i++){
            int steal = nums[i-1] + t[i-2]; 
            int skip  = t[i-1];

            t[i] = max(steal,skip);
        }

        return t[n]; // after visiting all n-houses, the max money earned by robber
        
    } 

// Method-3 => Constant space O(1)
    int rob(vector<int>& nums) {
        int n = nums.size();
        int prev = nums[0];
        int prevPrev = 0;

        for(int i=2;i<=n;i++){
            int skip  = prev;
            int steal = nums[i-1] + prevPrev;
            int temp = max(skip,steal);
            
            prevPrev = prev;
            prev = temp;
        }
        return prev;
    } 
