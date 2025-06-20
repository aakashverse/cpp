#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDistance(string s, int k) {
        int n = s.length();
        vector<int>dist;
        int x = 0,y = 0;
        
        for(char move:s){
            if(move == 'N') y++;
            else if(move == 'S') y--;
            else if(move == 'E') x++;
            else if(move == 'W') x--;

            dist.push_back(abs(x) + abs(y));
        }

        if(k == 0)
        return *max_element(dist.begin(),dist.end());

        // try other options if k left
//if a distance drops and we have operations left, apply one to reverse the effect.

        int maxDist = dist[1];
        int prev = dist[0];
        int add = 0;

        for(int i=1;i<n;i++){
            if(dist[i]<prev && k>0){
                add += 2; // Each reversal effectively adds 2 to future distances.
                k--;
            }
            prev = dist[i];
            dist[i] += add;
            maxDist = max(maxDist,dist[i]);
        }

        return maxDist;
    }
};