#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string robotWithString(string s) {
       int n = s.length();

        //precompute the lexo min char to right
        vector<char>minCharToRight(n);
        minCharToRight[n-1] = s[n-1];
        for(int i=n-2;i>=0;i--){
            minCharToRight[i] = min(s[i],minCharToRight[i+1]);
        }

        string t = "";
        string paper = "";
        int i = 0;

        while(i<n){
            t.push_back(s[i]);
            char minChar = (i+1 < n)? minCharToRight[i+1] : s[i];

            while(!t.empty() && t.back()<= minChar){
                paper += t.back();
                t.pop_back();
            }
            i++;
        } 

        // Remaining char in t
        while(!t.empty()){
            paper += t.back();
            t.pop_back();
        }

        return paper;
        
    }
};