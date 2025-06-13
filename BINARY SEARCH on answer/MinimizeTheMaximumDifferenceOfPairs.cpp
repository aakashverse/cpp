#include<bits/stdc++.h>
using namespace std;

bool CanFormPairs(vector<int>&nums,int max_Diff,int p){
    int count = 0;
    int i = 1;
    while(i < nums.size()){
        if(nums[i] - nums[i-1] <= max_Diff){
            count++;
            i += 2; // skip that pair
        }
        else{
            i++; // move to next pair
        }
    }

    return count >= p;
}

int main(){
    vector<int>nums = {4,2,1,2};
    int p; cin>>p; // no of pairs

    sort(nums.begin(),nums.end());

    int low = 0; // lower limit
    int high = *max_element(nums.begin(),nums.end()); // higher limit
    int result = 0;

    while(low <= high){
        int mid = low+(high - low)/2;

        if(CanFormPairs(nums,mid,p)){
            result = mid;
            high = mid - 1; // try for smaller max difference
        }
        else{
            low = mid + 1; // need to allow bigger max differences
        }
    }

    cout<<result<<endl;
}