#include<bits/stdc++.h>
using namespace std;
// Leetcode-2044 Count number of Maximum Bitwise OR Subsets
// TC=O(2^N)
    int countSubsets(int currOR,int idx,int maxOR,vector<int>&nums)
    {
        if(idx==nums.size()){
            if(currOR==maxOR)
                return 1;

            return 0;
        }
    
        // taken + Not taken
        return countSubsets(currOR|nums[idx],idx+1,maxOR,nums) + countSubsets(currOR,idx+1,maxOR,nums);
      
    }

    int countMaxOrSubsets(vector<int>& nums){
        int maxOR=0;
        for(int num:nums){
            maxOR|=num;
        }
        
        int currOR=0;
        return countSubsets(currOR,0,maxOR,nums);
        
    }