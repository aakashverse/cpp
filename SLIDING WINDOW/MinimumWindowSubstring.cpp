#include<bits/stdc++.h>
using namespace std;
// IMPORTANT PROBLEM // LC-76 //

    string minWindow(string s, string t) {
        int n = s.length();

        if(t.size() > n)
        return "";

        unordered_map<int,int>mp;
        for(char ch:t)
        mp[ch]++;

        int reqCount = t.size();
        int start_i = 0;
        int minLen = INT_MAX;
        int i=0,j=0;

        while(j<n){
            
            if(mp[s[j]] > 0){
                reqCount--;
            }

            mp[s[j]]--;

            while(reqCount == 0){
                int curLen = j-i+1;

                if(curLen < minLen){
                    minLen = curLen;
                    start_i = i;
                }

                mp[s[i]]++;
                
                if(mp[s[i]] > 0)
                reqCount++;

                i++;
            }

            j++;

        }

        return (minLen == INT_MAX)? "" : s.substr(start_i,minLen);
        
    }