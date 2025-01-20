#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;

int minMaxSums(vector<int>& nums, int k) {
    int n=nums.size();
    long long ans=0;

    for(long long mask=0; mask<(1LL << n);mask++){  // to avoid 32 bit integer overflow consider mask in long long & 1LL(LongLong) to make it 64 bit integer bit masking
        vector<int>subseq;

        for(int i=0;i<n;i++){
            if(mask&(1LL << i))
            subseq.push_back(nums[i]);
        }

        if(subseq.size()<=k && !subseq.empty()){
            int maxEle = *max_element(subseq.begin(),subseq.end());
            int minEle = *min_element(subseq.begin(),subseq.end());

            ans = (ans+maxEle+minEle) % MOD;
        }
    }

    return ans;
}

int main(){
    vector<int>nums={1,2,3};
    int k=2;

    cout<<minMaxSums(nums,k)<<endl;
}

