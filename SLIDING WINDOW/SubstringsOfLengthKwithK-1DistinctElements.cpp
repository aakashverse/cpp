#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int substrCount(string &s, int k) {
        // code here
        int n = s.length();
        if(k < n) return 0; // no possible substring
        
        unordered_map<char,int>mp;
        int count = 0;
        
        for(int i=0;i<k;i++) 
        mp[s[i]]++;
        
        if(mp.size() == k-1) count++;
        
        int j=k;
        while(j<n){
            
            mp[s[j-k]]--;  // char leaving the window 
            
            if(mp[s[j-k]] == 0){
                mp.erase(s[j-k]);
            }
            
            mp[s[j]]++;   // char entering the window
            if(mp.size() == k-1)
            count++;
            
            j++;
        }
        
        return count;
        
    }
};