#include<bits/stdc++.h>
using namespace std;

// METHOD-1 => Backtracking TC: O(2^n*n)
    bool checkPal(string s,int i,int j){
        
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

    void solve(string &s,int idx,vector<string> temp,vector<vector<string>> &result){
        if(idx >= s.length()){
            result.push_back(temp);
            return;
        }
        
        for(int i=idx;i<s.length();i++){ // explore all from idx to i
            if(checkPal(s,idx,i)){
                temp.push_back(s.substr(idx,i-idx+1));
                solve(s,i+1,temp,result);
                temp.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        int n = s.length();
        vector<vector<string>>result;
        vector<string>temp;

        solve(s,0,temp,result);
        return result;
    }

// METHOD-2 => Bottom Up(Blueprint)
class Solution {
public: 
    void solve(string &s,int i,vector<string>& temp,vector<vector<string>> &result, vector<vector<bool>> &t){
        if(i >= s.length()){
            result.push_back(temp);
            return;
        }
    // every index has two option - partition, not partition
    // TC: O(2^n)
        for(int j=i;j<s.length();j++){
            if(t[i][j] == true){ // isPalindrome // O(1)
                temp.push_back(s.substr(i,j-i+1));
                solve(s,j+1,temp,result,t);
                temp.pop_back();
            }
        }
    }
  
    vector<vector<string>> partition(string s) {
        int n = s.length();
        vector<vector<bool>>t(n,vector<bool>(n,false)); // SC: O(n^2)

        for(int i=0;i<n;i++){
            t[i][i] = true;
        }

        for(int L=2;L<=n;L++){ // TC: (O)n^2
            for(int i=0;i<n-L+1;i++){
                int j = i+L-1;
                if(s[i] == s[j]){
                    if(L == 2)
                    t[i][j] = true;
                    else
                    t[i][j] = t[i+1][j-1];
                }
            }
        }

        vector<vector<string>>result;
        vector<string>temp;
        solve(s,0,temp,result,t);
        return result;
        // Overall TC: O(n^2 * 2^n)
        // Overall SC: O(n^2)
    }
};    

