#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       int n=nums.size();
       deque<int>dq;
       vector<int>ans;

      //k-1 elements ko traverse kro
        for(int i=0;i<k-1;i++){
            if(dq.empty())
            dq.push_back(i);

            else{
                while(!dq.empty() && nums[i]>nums[dq.back()])
                dq.pop_back();

                dq.push_back(i);
            }
        }

        for(int i=k-1;i<n;i++){
            //Remove smaller elements from back
            while(!dq.empty() && nums[i]>nums[dq.back()])
            dq.pop_back();
            dq.push_back(i);

            //if element is outside the window,pop it
            if(dq.front() <= i-k)
            dq.pop_front();

            //find ans
            ans.push_back(nums[dq.front()]);
        }
      return ans;
    }
};