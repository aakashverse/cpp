// LONGEST INCREASING SUBSEQUENCE
#include<bits/stdc++.h>
using namespace std;

// METHOD_1 => Rec+Memo 
  /*int n;
    int t[2501][2501]; 
    int solve(vector<int>&nums,int idx,int p){
        if(idx >= n)
        return 0;

        if(p != -1 && t[idx][p] != -1){
            return t[idx][p];
        }
        
        int take = 0;
        if(p == -1 || nums[idx] > nums[p]){
            take = 1 + solve(nums,idx+1, idx);
        }
        
        int skip = solve(nums,idx+1,p);
        
        if(p != -1)
        t[idx][p] = max(take,skip);
        
        return max(take,skip);

    }

    int lengthOfLIS(vector<int>& nums) {
        n = nums.size();
        memset(t,-1,sizeof(t));
        return solve(nums,0,-1);
    }*/

// METHOD-2 Bottom up
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int>t(n,1);
        int maxLIS = 0;
    
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[j] > nums[i]){
                    t[i] = max(t[i], 1+t[i]);
                    maxLIS = max(maxLIS, t[i]);
                }
            }
        }

        return maxLIS;

    }

    int main(){
        vector<int>nums = {0,1,0,3,2,3};
        cout<<lengthOfLIS(nums);

    }
