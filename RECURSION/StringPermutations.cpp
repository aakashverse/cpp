#include<bits/stdc++.h>
using namespace std;

void permut(string &s,int index,string &temp,vector<bool>&visited,set<string>&uniquepairs){
       
        if(temp.size()==s.size()){ //if index reaches to the last
            uniquepairs.insert(temp);  
            return;
        }
        
        for(int i=0;i<s.size();i++){
            if(!visited[i]){
                visited[i]=true;
                temp+=s[i];
                permut(s,i,temp,visited,uniquepairs);
                visited[i]=false;
                temp.pop_back();
            }
        }
    }
  

    vector<string>findPermutation(string &s) {
        // Code here there
        int n=s.size();
        set<string>uniquepairs;
        string temp="";
        vector<bool>visited(n,false);
        permut(s,0,temp,visited,uniquepairs);
        
        vector<string>ans(uniquepairs.begin(),uniquepairs.end());
        return ans;
    }