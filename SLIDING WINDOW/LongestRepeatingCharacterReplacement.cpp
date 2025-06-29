#include<bits/stdc++.h>
using namespace std;

/* In any window (substring):

+ We want to make all characters equal.

+ We are allowed to change up to k characters.

++ Let’s say the window has length L, and the most frequent character in the window appears maxFreq times.

++ Then, we need to change (L - maxFreq) characters.

++ So, if (L - maxFreq <= k), the window is valid.*/

class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int i=0, j=0;
        int len=0;
        
        vector<int>freq(26,0);
        int maxfreq = 0;
        
        while(j<n){

            freq[s[j]-'A']++;
            if(freq[s[j]-'A'] > maxfreq)
            maxfreq = freq[s[j]-'A'];
            
            // If we need to change more than k chars → shrink window
            while((j-i+1) - maxfreq > k){
                freq[s[i]-'A']--; 
                i++;
            }

            len = max(len,j-i+1);
            j++;
        
        }

        return len;
    }
};