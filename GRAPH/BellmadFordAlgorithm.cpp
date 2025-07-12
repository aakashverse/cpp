#include<bits/stdc++.h>
using namespace std;

    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        // Code here
        vector<int>dist(V,1e8);
        dist[src] = 0;
        
        // Relax edges v-1 times
        for(int i=0;i<V-1;i++){
            
            for(auto &t:edges){
                auto u  = t[0];
                auto v  = t[1];
                auto wt = t[2];
                
                if(dist[u] != 1e8 && dist[u] + wt < dist[v])
                dist[v] = dist[u] + wt;
            }
        }
        
        // if you'r able to relax one more time, this means there is a negative weight cycle
        //(i.e. you'r stuck in an infinite loop that keeps finding shorter distance) 
        for(int i=0;i<V;i++){
            for(auto &t:edges){
                auto u  = t[0];
                auto v  = t[1];
                auto wt = t[2];
                
                if(dist[u] != 1e8 && dist[u] + wt < dist[v])
                return {-1};
            }
        }
        
        return dist;
        
    }
