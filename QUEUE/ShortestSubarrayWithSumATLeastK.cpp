#include<bits/stdc++.h>
using namespace std;
// can't solved by SLIDING WINDOW since it involves negative numbers(a demerit of sliding window)
class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long long>prefix(n+1,0);

        for(int i=0;i<n;i++){
            prefix[i+1] = prefix[i] + nums[i];
        }
        
        deque<int>dq;
        int len = n+1;
        for(int i=0;i<=n;i++){

            while(!dq.empty() && prefix[i] - prefix[dq.front()] >= k){
                len = min(len,i-dq.front());
                dq.pop_front();
            }

            while(!dq.empty() && prefix[i] <= prefix[dq.back()]){ // for monotonic increase
                dq.pop_back();
            }

            dq.push_back(i);
        }

        return (len <= n)? len:-1;
    }
};

