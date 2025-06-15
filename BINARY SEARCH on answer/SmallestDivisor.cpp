#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    bool isDivisor(vector<int>&nums,int divisor,int k){
        int sum = 0;
        
        for(int i=0;i<nums.size();i++){
            sum += (nums[i] + divisor - 1)/divisor;
        }
        
        return sum <= k;
    }
   
  
    int smallestDivisor(vector<int>& nums, int k) {
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        int ans = 0;
        
        while(low <= high){
            int mid = low+(high-low)/2;
            
            if(isDivisor(nums,mid,k)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        
        return ans;
    }
};