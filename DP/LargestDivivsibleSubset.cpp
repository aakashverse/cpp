#include<bits/stdc++.h>
using namespace std;

// METHOD-1 TOp Down

    void solve(vector<int>&nums,int idx,vector<int>&result,vector<int>&temp){
        if(idx >= nums.size()){
            if(temp.size() > result.size())
            result = temp;
            
            return;
        }

        if(temp.empty() || nums[idx] % temp.back() == 0){
            temp.push_back(nums[idx]);
            solve(nums, idx+1, result, temp);
            temp.pop_back();
        }

        solve(nums,idx+1, result ,temp);
    
    }

    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>result;
        vector<int>temp;
        solve(nums,0,result,temp);
        return result;
    }


// Method-2 Bottom Up O(n*n)
vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());

        vector<int>dp(n,1);
        vector<int>prevIdx(n,-1); // to track backwards
        
        int last_chosen_idx = 0; // start point
        int max_len = 0;

        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){

                if(nums[i] % nums[j] == 0){

                    if(dp[i] < dp[j]+1){
                        dp[i] = 1+dp[j];
                        prevIdx[i] = j;
                    }

                    if(dp[i] > max_len){
                        max_len = dp[i];
                        last_chosen_idx = i;
                    }
                }
            }
        }
        vector<int>result;
        while(last_chosen_idx != -1){
            result.push_back(nums[last_chosen_idx]);
            last_chosen_idx = prevIdx[last_chosen_idx];
        }

        return result;
    }