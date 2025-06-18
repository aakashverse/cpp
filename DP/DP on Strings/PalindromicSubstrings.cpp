#include<bits/stdc++.h>
using namespace std;

// METHOD-1 => TOP Down TC: O(n*n)
class Solution {
public:
    int t[1001][1001];
    bool checkPal(string &s,int i,int j){ // every string only checked once that's why this fn not contribute in TC 
        if(i > j){
            return true;
        }

        if(t[i][j] != -1){
            return t[i][j];
        }

        if(s[i] == s[j]){
            return t[i][j] = checkPal(s,i+1,j-1);
        }

        return false;
        
    }

    int countSubstrings(string s) {
        int n = s.length();
        memset(t,-1,sizeof(t));
        int count = 0;

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(checkPal(s,i,j))
                count++;
            }
        }

        return count;
    }
};

// METHOD-2 => Bottom Up TC: O(n*n)
class Solution {
public:
    int countSubstrings(string s) {
        int n = s.length();
        vector<vector<bool>>t(n,vector<bool>(n,false));
        int count = 0;
        
        for(int L=1;L<=n;L++){
            for(int i=0;i+L-1<n;i++){
            int j = i + L - 1;  // **beauty** //
                if(i == j) // 1 length ka 
                t[i][i] = true;
                else if(i+1 == j) // 2 length ka
                t[i][j] = (s[i] == s[j]);
                else
                t[i][j] = (s[i] == s[j] && t[i+1][j-1]); // > 2 length ka
                
                if(t[i][j] == true)
                count++;
            }
        }
        return count;
    }
};