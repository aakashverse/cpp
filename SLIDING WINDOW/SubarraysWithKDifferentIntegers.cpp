#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int CountAtleast(vector<int>&nums,int k){
        int n=nums.size();
        unordered_map<int,int>freq;
        int i=0,j=0,count=0,ans=0;
        //count -> stores number of diff integers in that window

        while(j<n){

            freq[nums[j]]++;
            if(freq[nums[j]]==1)
            count++;

            //Increase the window size till count is equals to k
            while(count == k){
                ans += n-j;
                freq[nums[i]]--;
                if(freq[nums[i]]==0)
                count--;

                i++;
            }
            j++;
        }
        return ans;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k){
    
        return CountAtleast(nums,k) - CountAtleast(nums,k+1);
            //Exact(k) = Atleast(k) - Atleast(k+1)
            //**This method is used for counting subarrays not lengths, you can count exact k elements substring length directly
    }
};