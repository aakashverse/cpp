#include<bits/stdc++.h>
using namespace std;

void display(vector<int>&subarray){
    for(int x:subarray)
    cout<<x<<" ";
}

void CompleteSubarrays(vector<int>&nums,int& ocount,int& res){
    
    for(int i=0;i<nums.size();i++){
        vector<int>subarray;
        for(int j=i;j<nums.size();j++){
            subarray.push_back(nums[j]);
            int ncount = unordered_set<int>(subarray.begin(),subarray.end()).size();

            if(ncount == ocount)
            res++;
        }
    }

}
    

int main(){
    vector<int>nums = {5,5,5,5};
    
    int ocount = unordered_set<int>(nums.begin(),nums.end()).size();
    int res = 0;
    
    CompleteSubarrays(nums,ocount,res);
    cout<<"no. of complete subarrays: "<<res<<endl;
    
}