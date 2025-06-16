#include<bits/stdc++.h>
using namespace std;

// METHOD-1 Top Down
    int t[1001][1001];
    int solve(string &s1,string &s2,int i,int j){
        if(i >= s1.length() || j >= s2.length()){
            return 0;
        }
        
        if(t[i][j] != -1){
            return t[i][j];
        }

        if(s1[i] == s2[j]){
            return 1 + solve(s1,s2,i+1,j+1);
        }

        return t[i][j] = max(solve(s1,s2,i+1,j),solve(s1,s2,i,j+1));

    }

    int longestCommonSubsequence(string s1, string s2) {
        memset(t,-1,sizeof(t));
        return solve(s1,s2,0,0);
    }

// METHOD-2 Bottom Up
    int longestCommonSubsequence(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();

        vector<vector<int>>t(n+1,vector<int>(m+1));
        //first row and col will be 0
        for(int row=0;row<n+1;row++){
            t[row][0] = 0;
        }

        for(int col=0;col<m+1;col++){
            t[0][col] = 0;
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1] == s2[j-1])
                t[i][j] = 1 + t[i-1][j-1];
                else
                t[i][j] = max(t[i-1][j],t[i][j-1]);
            }
        }

        string lcs = "";
        int i=n,j=m;
        while(i>0 && j>0){

            if(s1[i-1] == s2[j-1]){
                lcs.push_back(s1[i-1]);
                i--;   // move diagonally
                j--;   //  "       "
            }
            else{
                if(t[i-1][j] > t[i][j-1]) i--;
                else j--;
            }
        }
        
        reverse(lcs.begin(),lcs.end());
        cout<<lcs<<endl;

        return t[n][m]; 
    }