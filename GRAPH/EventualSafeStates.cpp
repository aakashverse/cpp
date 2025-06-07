#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>graph(7);
    graph[0].push_back(1);
    graph[0].push_back(2);
    graph[1].push_back(2);
    graph[1].push_back(3);
    graph[2].push_back(5);
    graph[3].push_back(0);
    graph[4].push_back(5);
    graph[5].push_back(-1);
    graph[6].push_back(-1);

    int V=graph.size();
    vector<vector<int>>Adj(V);
        
    //Adjacency List
    for(int i=0;i<V;i++){
        for(int j=0;j<graph[i].size();j++){
            Adj[i].push_back(graph[i][j]);
        }
    }

     // Printing adjacency list for verification
    for(int i = 0; i < V; i++){
        cout << i << " -> ";
        for(int j = 0; j < Adj[i].size(); j++){
            cout << Adj[i][j] << " ";
        }
        cout << endl;
    }
    //vector<int>res;
    vector<int>InDeg(V,0);
        for(int i=0;i<V;i++){
            for(int j=0;j<Adj[i].size();j++){
                InDeg[Adj[i][j]]++;
            }
        }

        for(int i=0;i<V;i++){
            if(InDeg[i]==1)
            cout<<i<<" ";
        }

}