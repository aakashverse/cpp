#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isNStraightHand(vector<int>& nums, int groupSize) {
        if(nums.size() % groupSize != 0) return false;

        map<int,int>freq;
        for(int num:nums){  // O(n)
            freq[num]++;
        }

        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto &it:freq){  // O(k*logk)
            pq.push(it.first);
        }

        while(!pq.empty()){
            int start = pq.top();

            for(int i=0;i<groupSize;i++){  
                int cur = start+i;
                if(freq[cur] == 0) return false;
                freq[cur]--;

                if(freq[cur] == 0 && cur == pq.top())
                pq.pop();

                while(!pq.empty() && freq[pq.top()] == 0)
                pq.pop();
            }
        }
        return true;
        // TC: O(n + k*logk)
    }
};