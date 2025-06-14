#include<bits/stdc++.h>
using namespace std;

// METHOD-1 => Top Down (gives TLE)
    unordered_map<string,long long>mp;
    long long solve(vector<int>&nums,int idx,int prevIdx){
        if(idx >= nums.size()){
            return 0;
        }

        string key = to_string(prevIdx) + "_" + to_string(idx);
        if(mp.find(key) != mp.end()){
            return mp[key];
        }

        long long take = INT_MIN,skip = INT_MIN;
        if(prevIdx == -1 || nums[idx] - nums[prevIdx] >= idx - prevIdx)
        take = nums[idx] + solve(nums,idx+1,idx);

        skip = solve(nums,idx+1,prevIdx);
        
        return mp[key] = max<long long>(take,skip);
    }


    long long maxBalancedSubsequenceSum(vector<int>& nums) {
        int max_ele = *max_element(nums.begin(),nums.end());
        if(max_ele <= 0) // negative elements adds upto to form minimum number 
        return max_ele; // return the maximum one like in Test case-3

        return solve(nums,0,-1);
    }

// METHOD-2 => Bottom Up (gives TLE)
    long long maxBalancedSubsequenceSum(vector<int>& nums) {
        int n = nums.size();
        int maxEle = *max_element(nums.begin(),nums.end());
        if(maxEle <= 0){
            return maxEle;
        }

        vector<long long>t(n);
        for(int i=0;i<n;i++){
            t[i] = nums[i];
        }
        
        long long maxSum = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i] - i >= nums[j] - j)
                t[i] = max<long long>(t[i], t[j]+nums[i]);
                maxSum = max(maxSum,t[i]);
            }
        }

        return maxSum > maxEle? maxSum : maxEle;   
    }

// METHOD-3 Bottom up (memorized with map)    
    long long maxBalancedSubsequenceSum(vector<int>& nums) {
        map<int,long long>mp;
        long long result = INT_MIN;

        for(int i=0;i<nums.size();i++){

            auto it = mp.upper_bound(nums[i]-i);
            long long sum = nums[i];

            if(it != mp.begin()){
                it--;
                sum += (*it).second;   
            }
            mp[nums[i] - i] = max(mp[nums[i] - i],sum);

            it = mp.upper_bound(nums[i] -  i);

            while(it != mp.end() && it->second <= sum){
                mp.erase(it++);
            }

            result = max(result,sum);
        }

        return result;
    }