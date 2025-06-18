#include<bits/stdc++.h>
using namespace std;

// METHOD-1 => O(n*n)
    int t[1001][1001];
    bool checkPal(string &s,int i,int j){
        if(i>j) 
        return true;

        if(t[i][j] != -1){
            return t[i][j];
        }

        if(s[i] == s[j]){
            return t[i][j] = checkPal(s,i+1,j-1);
        }

        return false;
    }

    string longestPalindrome(string s) {
        int n = s.length();
        memset(t,-1,sizeof(t));
        int maxLen = INT_MIN;
        int sp = 0; // starting point

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(checkPal(s,i,j)){
                    if(j-i+1 > maxLen){
                        maxLen = j-i+1;
                        sp = i;
                    }
                }
            }
        }
        return s.substr(sp,maxLen);
    }

    // METHOD-2 => Bottom Up(Blue Print) TC: O(n*n)
    string longestPalindrome(string s) {
        int n = s.length();
        vector<vector<bool>>t(n,vector<bool>(n)); // SC: O(n^2)
        // state : t[i][j] = true if s[i:j] is palindrome, false if s[i:j] is not a palindrome

        int maxLen = 0;
        int idx = 0; // starting point index

        for(int i=0;i<n;i++){ // 1 length always palindrome
            t[i][i] = true;
            maxLen = 1;
        }

        for(int L=2;L<=n;L++){ // Try for all lengths
            for(int i=0;i<n-L+1;i++){
                int j = i+L-1;

                if(s[i] == s[j] && L == 2){
                    t[i][j] = true;
                    maxLen = 2;
                    idx = i;
                }
                else if(s[i] == s[j] && t[i+1][j-1]){ 
                    t[i][j] = true;
                    if(j-i+1 > maxLen)
                    maxLen = j-i+1;
                    idx = i;
                }
                else{
                    t[i][j] = false;
                }
            }
        }
        return s.substr(idx,maxLen);
    }