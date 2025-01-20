#include<bits/stdc++.h>
using namespace std;

vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int n=arr.size();
        vector<int>v;
        
        //sort(arr.begin(),arr.end());
        
        int i=0,j=0,sum=0;
        while(j<n){
            
            sum+=arr[j];
            
            while(sum>target && i<j){
               sum-=arr[i];    
               i++;
            }
            
            if(sum==target){
               v.push_back(i);
               v.push_back(j);
               return v;
            }
            
            j++;
        }
        
        return {-1};
    }


int main(){
    vector<int>arr={1,2,3,7,5};
    int target=12;
    vector<int>ans=subarraySum(arr,target);

    for(int x:ans)
    cout<<x<<" ";

}