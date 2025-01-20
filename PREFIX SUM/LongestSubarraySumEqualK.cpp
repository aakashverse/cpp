#include<bits/stdc++.h>
using namespace std;

int LongestSubarrays(vector<int>&arr,int k){

    int n=arr.size();
    int len=0,PrefixSum=0;
        
    unordered_map<int,int>mp;
    mp[0]=0;  //initializes the map with a prefix sum of 0 at index 0
        
    for(int i=0;i<n;i++){
            
        PrefixSum+=arr[i];
            
        if(PrefixSum==k)
        len=i+1;
            
            
        if(mp.find(PrefixSum-k)!=mp.end())
        len=max(len,i-mp[PrefixSum-k]);
            
            
        if(mp.find(PrefixSum)==mp.end())
        mp[PrefixSum]=i;
    }
        
    return len;
}


int main(){

    vector<int>arr={10,5,2,7,1,-10};

    int k=15;

    cout<<"The longest subarray with sum "<<k<<" is "<< LongestSubarrays(arr,k)<<endl;

}