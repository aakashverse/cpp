#include<bits/stdc++.h>
using namespace std;

// METHOD-1 => Top down 
    int t[501][501];
    int solve(string &s,int i,int j){
        if(i>=j){
            return 0;
        }

        if(t[i][j] != -1){
            return t[i][j];
        }

        if(s[i] == s[j]){
            return t[i][j] = solve(s,i+1,j-1);
        }

        else
        return t[i][j] = min(1+solve(s,i+1,j),1+solve(s,i,j-1));

    }


    int minInsertions(string s) {
        int n = s.length();
        memset(t,-1,sizeof(t));

        return solve(s,0,n-1);
    }
  
// METHOD-2 Bottom Up(Blueprint)
// TC: O(n^2) // SC: O(n^2)   
    int minInsertions(string s) {
        int n = s.length();
        vector<vector<int>>t(n,vector<int>(n)); 
        // t[i][j] = min. insertion to make s[i:j] a palindrome

        for(int L=2;L<=n;L++){
            for(int i=0;i<n-L+1;i++){
                int j = i+L-1;
                if(s[i] == s[j]) t[i][j] = t[i+1][j-1]; // no insertion as single length string is already palindrome
                else t[i][j] = 1 + min(t[i+1][j],t[i][j-1]);
            }
        }

        return t[0][n-1];

    }