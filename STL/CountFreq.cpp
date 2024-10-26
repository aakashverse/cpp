#include<bits/stdc++.h>
using namespace std;

    int getSingle(vector<int>& arr){
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            if(mp.find(arr[i])!=mp.end())
            mp[arr[i]]++; // if exisits increases its frequency
            else
            mp[arr[i]]=1; // if not exists set its frequency to 1
        }
        
        for(auto it:mp){
            if(it.second%2)
            return it.first;
        }
       return -1; 
    }

    int main(){
        vector<int>arr={1,1,2,3,3};
        cout<<getSingle(arr); // returns the odd freq element in O(1)
        
    }