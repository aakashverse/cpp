#include<bits/stdc++.h>
using namespace std;

// METHOD-1 => Top Down
    int m,n;
    int t[501][501]; 
    int solve(string &word1,string &word2,int i,int j){
        if(i == m){
            return n-j; // insertions in s1
        }
        if(j == n){
            return m-i; // deletions from s1
        }

        if(t[i][j] != -1){
            return t[i][j];
        }

        if(word1[i] == word2[j]){
            return solve(word1,word2,i+1,j+1);
        }
        else{
            int insert  = 1 + solve(word1,word2,i,j+1);
            int deletee = 1 + solve(word1,word2,i+1,j);
            int replace = 1 + solve(word1,word2,i+1,j+1);

            return t[i][j] = min({insert,deletee,replace});
        }
        return -1;
    }


    int minDistance(string word1, string word2) {
        m = word1.length();
        n = word2.length();
        memset(t,-1,sizeof(t));

        return solve(word1,word2,0,0);
    }

    // METHOD-2 => with lengths of word1 & word2 (m,n) [mostly prefered in DP on strings]
    int t[501][501]; 
    int solve(string &word1,string &word2,int m,int n){
        if(m == 0 || n == 0){
            return m+n;
        }

        if(t[m][n] != -1){
            return t[m][n];
        }

        if(word1[m-1] == word2[n-1]){ 
            return solve(word1,word2,m-1,n-1);
        }
        else{
            int insert  = 1 + solve(word1,word2,m,n-1);
            int deletee = 1 + solve(word1,word2,m-1,n);
            int replace = 1 + solve(word1,word2,m-1,n-1);

            return t[m][n] = min({insert,deletee,replace});
        }
        return -1;
    }


    int minDistance(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();
        memset(t,-1,sizeof(t));

        return solve(word1,word2,m,n);
    }

// METHOD-3 => Bottom Up O(m*n)   