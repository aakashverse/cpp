#include<bits/stdc++.h>
using namespace std;

// Method-1 => Rec + Memo (Top Down)
    int t[101];
    int money(vector<int>&nums,int idx,int n){
        if(idx > n){ // here n is index, not size like in HR1
            return 0;
        }
        
        if(t[idx] != -1){
            return t[idx];
        }

        int steal = nums[idx] + money(nums,idx+2,n); 
        int skip  = money(nums,idx+1,n);

        return t[idx] = max(steal,skip);
    }


    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        if(n == 2) return max(nums[0],nums[1]);

        memset(t,-1,sizeof(t));
        int res1 = money(nums,0,n-2); // skip last  house
        memset(t,-1,sizeof(t));
        int res2 = money(nums,1,n-1); // skip first house

        return max(res1,res2);
        
    }

// Method-2 => Bottom Up
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        if(n == 2) return max(nums[0],nums[1]);
        
        // case1: when first house is robbed, means last house can not be robbed
        vector<int>t(n+1);
        t[0] = 0;

        for(int i=1;i<=n-1;i++){
            int steal = nums[i-1] + ((i-2 >= 0) ? t[i-2]: 0); 
            int skip = t[i-1];

            t[i] = max(steal,skip);
        }
        int res1 = t[n-1];
        
        t.clear();
        // case2: when last house is robbed, means first house can not be robbed
        t[0] = 0;
        t[1] = 0; // skip 1st house
        for(int i=2;i<=n;i++){ 
            int steal = nums[i-1] + ((i-2 >= 0)? t[i-2] : 0);  
            int skip = t[i-1];

            t[i] = max(steal,skip);
        }

        int res2 = t[n];

        return max(res1,res2);  
        
    }

// Method-3 => Constant space O(1)
    int solve(vector<int>&nums,int l,int r){
        int prev = 0;
        int prevPrev = 0;

        for(int i=l;i<=r;i++){
            int skip = prev;
            int steal = nums[i] + prevPrev;
            int temp = max(skip,steal);
            prevPrev = prev;
            prev = temp; 
        }

        return prev;
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        if(n == 2) return max(nums[0],nums[1]);

        int first_house_rob = solve(nums,1,n-1);
        int last_house_rob  = solve(nums,0,n-2);

        return max(first_house_rob,last_house_rob);
        
    } 