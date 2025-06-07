 #include<bits/stdc++.h>
 using namespace std;
 
    vector<int>dijkstra(vector<vector<pair<int,int>>>&adj, int src) {
        // Code here
        int v=adj.size();
        vector<bool>Explored(v,0);
        vector<int>dist(v,INT_MAX);
        dist[src]=0;
        
        priority_queue< pair<int,int>,vector< pair<int,int>>,greater< pair<int,int>>>pq;
        pq.push({0,src});
        
        while(!pq.empty()){
            
            //select minimum value from all the not explored vertices
            int node = pq.top().second;
            pq.pop();
            
            if(Explored[node]==1)
            continue;
            
            
            Explored[node] = 1;
            
            //Relax the edges
            for(int j=0;j<adj[node].size();j++){
                int neighbour = adj[node][j].first;
                int weight = adj[node][j].second;
                
                if(!Explored[neighbour] && (dist[node]+weight<dist[neighbour])){
                    dist[neighbour] = dist[node]+weight;
                    pq.push({dist[neighbour],neighbour});
                }
            }
            
        }
        return dist;
        
    }