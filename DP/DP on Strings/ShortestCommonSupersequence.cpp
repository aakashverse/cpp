#include<bits/stdc++.h>
using namespace std;

// METHOD-1 => Top Down
class Solution {
  public:
    int t[501][501];
    int solve(string &s1,string &s2,int m,int n){
        if(m == 0 || n == 0){
            return m + n;
        }
        
        if(t[n][m] != -1){
            return t[n][m];
        }
        
        if(s1[n-1] == s2[m-1]){
            return t[n][m] = 1 + solve(s1,s2,m-1,n-1);
        }
        else{
            return t[n][m] = 1 + min(solve(s1,s2,m-1,n),solve(s1,s2,m,n-1)); // 1 is taken out as common from both the calls
        }
        
    }
    
    
    int shortestCommonSupersequence(string &s1, string &s2) {
        int n = s1.length();
        int m = s2.length();
        memset(t,-1,sizeof(t));
        
        return solve(s1,s2,m,n);
    }
};

// METHOD-2 => Bottom Up TC: O(m*n)
class Solution {
  public:
    int shortestCommonSupersequence(string &s1, string &s2) {
        int m = s1.length();
        int n = s2.length();
        
        vector<vector<int>>t(m+1,vector<int>(n+1));
        
        for(int i=0;i<m+1;i++){
            for(int j=0;j<n+1;j++){
                
                if(i == 0 || j == 0)
                t[i][j] = i+j;
                else if(s1[i-1] == s2[j-1])
                t[i][j] = 1 + t[i-1][j-1];
                else
                t[i][j] = 1 + min(t[i-1][j],t[i][j-1]);
                
            }
        }
        return t[m][n];
        
        // Printing SCS
        string res = "";
        int i = m;
        int j = n;

        while(i>0 && j>0){
            if(s1[i-1] == s2[j-1]){
                res.push_back(s1[i]); // & move diagonally
                i--;   
                j--;
            }
            else{
                if(t[i][j-1] > t[i-1][j]){
                    res.push_back(s1[i]);
                    i--;
                }
                else{
                    res.push_back(s2[j]);
                    j--;
                }
            }
        }

        while(i>0){
            res.push_back(s1[i-1]);
            i--;
        }

        while(j>0){
            res.push_back(s2[j-1]);
            j--;
        }

        reverse(res.begin(),res.end());
        cout<<res<<endl;
        
    }
};

// METHOD-3 using LIS Approach
class Solution {
  public:
    int shortestCommonSupersequence(string &s1, string &s2) {
        int m = s1.length();
        int n = s2.length();
        
        vector<vector<int>>t(m+1,vector<int>(n+1));
        
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                
                if(s1[i-1] == s2[j-1])
                t[i][j] = 1 + t[i-1][j-1];
                else
                t[i][j] =  max(t[i-1][j],t[i][j-1]);
                
            }
        }
        
        int LCS = t[m][n];
        int extra_char_in_s1 = m - LCS;
        int extra_char_in_s2 = n - LCS;
        
        return LCS + extra_char_in_s1 + extra_char_in_s2;
    }
};