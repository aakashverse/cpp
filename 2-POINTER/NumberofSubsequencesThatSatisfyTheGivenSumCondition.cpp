#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mod = 1e9+7;
    int numSubseq(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
        // precompute power
        vector<int>power(n);
        power[0]=1;
        for(int i=1;i<n;i++){
            power[i] = (power[i-1]*2)%mod;
        }

        int res = 0;
        int i=0,j=n-1;
        while(i<=j){
           
            if(nums[i] + nums[j] <= target){
                // If valid, all subsequences starting with nums[left] 
                // and ending anywhere from left to right are valid
                // Number of such subsequences = 2^(right-left)
                res = (res + power[j-i])%mod; 
                i++;
            }
            else
            j--;
        }

        return res;
    }
};