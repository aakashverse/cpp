#include<bits/stdc++.h>
using namespace std;

// METHOD-1 => Rec+Memo  // TC: O(n^2)
class Solution {
public:
    bool isPalindrome(string s,int i,int j){
        while(i<=j){
            if(s[i] == s[j]){
                i++;
                j--;
            }
            else
            return false;
        }

        return true;
    }

    int solve(string s,int i,int j){
        if(isPalindrome(s,i,j)){  // O(n)
            return 0;
        }
        
        int result = INT_MAX;
        for(int k=i;k<=j-1;k++){  // ~O(n)
            int temp = 1 + solve(s,i,k) + solve(s,k+1,j);
            result = min(result,temp);
        }

        return result;
    }
    
    int minCut(string s) {
        int n = s.length();
        return solve(s,0,n-1);
    }
};

// METHOD-2 => Bottom Up // TC: O(n*n) // SC: O(n*n)  
class Solution {
public:
    int minCut(string s) {
        int n = s.length();
        vector<vector<bool>>t(n,vector<bool>(n));

        for(int i=0;i<n;i++){
            t[i][i] = true;
        }

        for(int L=2;L<=n;L++){
            for(int i=0;i<n-L+1;i++){
                int j = i+L-1;

                if(L == 2)
                t[i][j] = (s[i] == s[j]);
                else
                t[i][j] = ((s[i] == s[j]) && t[i+1][j-1]);

            }
        }

        vector<int>dp(n); 
        // dp[i] = min cuts to cut a string s[0..i] into palindrome
        for(int i=0;i<n;i++){
            if(t[0][i] == true){
                dp[i] = 0;
            }
            else{
                dp[i] = INT_MAX;
                for(int k=0;k<i;k++){
                    if(t[k+1][i] == true && 1 + dp[k] < dp[i]){
                        dp[i] = 1 + dp[k];
                    }
                }
            }
        }
        
        return dp[n-1];
    }
};