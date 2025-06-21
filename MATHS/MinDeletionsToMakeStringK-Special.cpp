#include<bits/stdc++.h>
using namespace std;

// METHOD-1  // TC: O(n)
    int minimumDeletions(string word, int k) {
        vector<int>freq(26,0);
        
        for(char &ch:word) 
        freq[ch-'a']++;

        int count = word.length();

        for(int i=0;i<26;i++){ 
            int del = 0;
            for(int j=0;j<26;j++){
                if(i == j) continue;

                if(freq[j] < freq[i])
                del += freq[j];

                else if(abs(freq[j] - freq[i]) > k)
                del += abs(freq[j] - freq[i] - k);
            }

            count = min(count,del);
        }
        return count;
    }

// METHOD-2 // TC: O(n)
    int minimumDeletions(string word, int k) {
        vector<int>freq(26,0);

        for(char &ch:word)
        freq[ch-'a']++;

        sort(freq.begin(),freq.end());

        int count = word.length();
        int cum_deleted = 0;

        for(int i=0;i<26;i++){
            int del = cum_deleted;
            for(int j=25;j>i;j--){
    
                if(freq[j] - freq[i] <= k)
                break;

                del += freq[j] - freq[i] - k;
            }

            count = min(count,del);
            cum_deleted += freq[i]; 
        }
        
        return count;
    }