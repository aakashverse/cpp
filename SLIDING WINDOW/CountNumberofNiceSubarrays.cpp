#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int countAtMost(vector<int>&nums,int k){
        int n=nums.size(), i=0, j=0, odd = 0;
        int count = 0; 

        while(j<n){

            if(nums[j]%2 != 0)
            odd++;

            while(odd>k){
                if(nums[i]%2 != 0)
                odd--;

                i++;
            }
         
            count += (j-i+1);
            j++;
        }
        return count;
    } 
    

    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();

        return countAtMost(nums,k) - countAtMost(nums,k-1);  // *** //
        // Exactly k => At most k - At most k - 1
        //           => subarray(0-3)length - subarray(0-2)length => exact 3-length subarray
    }
};