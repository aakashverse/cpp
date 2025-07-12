#include<bits/stdc++.h>
using namespace std;


	string findOrder(string dict[], int N, int K) {
		vector<char>adj[K];
        vector<int>InDeg(K,0);

        for(int i=0;i<N-1;i++){
            string str1 = dict[i];
            string str2 = dict[i+1];

            int j=0,k=0;
            while(j<str1.size() && k<str2.size() && str1[j] == str2[k])
            i++,k++;

            if(j == str1.size())
            continue;

            adj[str1[j]-'a'].push_back(str2[k]-'a');
            InDeg[str2[k]-'a']++;
        }
        
        // kahn's Algorithm
        queue<int>q;
        for(int i=0;i<N;i++){
            if(!InDeg[i])
            q.push(i);
        }

        string res = "";

        while(!q.empty()){
            int node = q.front();
            q.pop();
            char ch = node+'a';
            res += ch;

            for(int j=0;j<adj[node].size();j++){
                InDeg[adj[node][j]]--;
                if(InDeg[adj[node][j]] == 0)
                q.push(adj[node][j]);
            }
        }

        return res;
        
	}