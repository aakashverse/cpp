#include<bits/stdc++.h>
using namespace std;

// METHOD-1 => using LCS code, Rec+Memo O(m*n) = O(n^2)
// using orginal string & its reverse string then find LCS(which is Palindrome)
    int t[1001][1001];
    int solve(string &s,string &str,int m,int n){
        if(m == 0 || n == 0){
            return 0;
        }

        if(t[m][n] != -1){
            return t[m][n];
        }

        if(s[m-1] == str[n-1]){
            return t[m][n] = 1 + solve(s,str,m-1,n-1);
        }

        return t[m][n] = max(solve(s,str,m,n-1),solve(s,str,m-1,n));
    }
 

    int longestPalindromeSubseq(string s) {
        int m = s.length();
        memset(t,-1,sizeof(t));
        string str = s;
        reverse(s.begin(),s.end());
        
        return solve(s,str,m,m); 
    }

// METHOD-2 => using LCS code, Bottom up O(n^2)
    int longestPalindromeSubseq(string s) {
        int n = s.length();
        string str = s;
        reverse(s.begin(),s.end());
        
        vector<vector<int>>t(n+1,vector<int>(n+1));
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(i==0 || j==0) 
                t[i][j] = 0;
                else if(s[i-1] == str[j-1])
                t[i][j] = 1 + t[i-1][j-1];
                else
                t[i][j] = max(t[i-1][j],t[i][j-1]);
            }
        }

        return t[n][n];
    }

// METHOD-3  Rec+Memo
    int t[1001][1001];
    int solve(string &s,int i,int j){
        if(i > j)
        return 0;

        if(i == j) // 1 length ((i to i || j to j) subsequence) 
        return 1;

        if(t[i][j] != -1)
        return t[i][j];

        if(s[i] == s[j]) // 2 length (i to j subsequence) 
        return t[i][j] = 2 + solve(s,i+1,j-1);
        else
        return t[i][j] = max(solve(s,i,j-1),solve(s,i+1,j));
    }

    int longestPalindromeSubseq(string s) {
        memset(t,-1,sizeof(t));
        return solve(s,0,s.length()-1);
    }

// METHOD-4 Bottom Up (using Blueprint)
//TC: O(n*n) // SC: O(n*n)
    int longestPalindromeSubseq(string s) {
        int n = s.length();
        vector<vector<int>>t(n,vector<int>(n));

        for(int i=0;i<n;i++){
            t[i][i] = 1;
        }

        for(int L=2;L<=n;L++){
            for(int i=0;i<n-L+1;i++){
                int j = i+L-1;
                if(s[i] == s[j]) t[i][j] = 2 + t[i+1][j-1];
                else t[i][j] = max(t[i][j-1],t[i+1][j]);
            }
        }

        return t[0][n-1]; // longest LPS
    }
