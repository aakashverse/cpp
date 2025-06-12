#include<bits/stdc++.h>
using namespace std;

// METHOD-1 => Top Down

    int t[1001][1001];
    bool isPrede(string &curr,string &prev){
        int m = prev.size(); // prev word
        int n = curr.size(); // cur word

        if(m >= n || n-m != 1)
        return false;

        int i=0,j=0;
        while(i<m && j<n){

            if(prev[i] == curr[j])
            i++;

            j++; 
        }

        return i == m;
        
    }

    int solve(vector<string>& words,int idx,int prevIdx){
        if(idx >= words.size())
        return 0;
        
        if(prevIdx != -1 && t[idx][prevIdx] != -1){
            return t[idx][prevIdx];
        }

        int take = 0;
        if(prevIdx == -1 || isPrede(words[idx], words[prevIdx]))
        take = 1 + solve(words, idx + 1, idx);

        int skip = solve(words, idx + 1, prevIdx);
        if(prevIdx == -1) return max(take,skip);
        return t[idx][prevIdx] = max(take, skip);
    }

    int longestStrChain(vector<string>& words) {
        memset(t, -1, sizeof(t));
        sort(words.begin(),words.end(),[](string &w1,string &w2){
            return w1.length() < w2.length();
        });

        return solve(words,0,-1);
    }

//METHOD-2 => Bottom Up O(n^2)
     bool isPrede(string &curr,string &prev){
        int m = prev.size(); // prev word
        int n = curr.size(); // cur word

        if(m >= n || n-m != 1)
        return false;
        
        // checking predecessor if prev is in cur or not
        int i=0,j=0;
        while(i<m && j<n){

            if(prev[i] == curr[j])
            i++;

            j++; 
        }
        return i == m;
    }

    int longestStrChain(vector<string>& words) {
        int n = words.size();

        sort(words.begin(),words.end(),[](string &w1,string &w2){
            return w1.length() < w2.length();
        });

        vector<int>t(n,1);
        int maxLen = 1;

        for(int i=0;i<n;i++){

            for(int j=0;j<i;j++){
                if(isPrede(words[i],words[j]))
                t[i] = max(t[i], 1 + t[j]);
                maxLen = max(maxLen,t[i]);
            }
        }
        return maxLen;
    }