#include<bits/stdc++.h>
using namespace std;

    bool canEat(vector<int>&arr,int v,int k){
        int t = 0; 
        
        for(int i=0;i<arr.size();i++){
            // time to eat arr[i] bananas at speed v
            t += (arr[i] + v - 1)/v; // to avoid floating point math
            // That formula ensures that any remainder pushes the result up by 1, mimicking the effect of ceil().
        }
        
        return t <= k ;
        
    }
  
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        sort(arr.begin(),arr.end());
        
        int l = 1;
        int h = *max_element(arr.begin(),arr.end());
        int s = 0;
        
        while(l <= h){
            int mid = l+(h-l)/2;
            
            if(canEat(arr,mid,k)){
                s = mid;
                h = mid - 1; // try to find smaller speed
            }
            else{
                l = mid + 1; // need to allow bigger speed
            }
        }
        
        return s;
    }