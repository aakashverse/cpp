#include<bits/stdc++.h>
using namespace std;

// if negative elements are also involved in array, then sliding window not work (since, it doesn't neccessary that when you shrink window, the sum decreases)
// => use map to solve it by finding complement way

int longestSubarray(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        unordered_map<int,int>mp;
        mp[0] = 0;
        
        int PrefixSum = 0;
        int len = 0;
        for(int i=0;i<n;i++){
            PrefixSum += arr[i];
            
            if(PrefixSum == k)
            len = i+1;
            
            if(mp.find(PrefixSum - k) != mp.end()){
                len = max(len,i-mp[PrefixSum-k]);
            }
            
            if(mp.find(PrefixSum) == mp.end()){
                mp[PrefixSum] = i;
            }
            
        }
        
        return len;
    }