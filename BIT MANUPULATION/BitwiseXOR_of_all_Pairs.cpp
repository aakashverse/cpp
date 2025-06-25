#include<bits/stdc++.h>
using namespace std;

int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
    int n1=nums1.size(),n2=nums2.size();
    int xorr1=0,xorr2=0;

    for(int x:nums1)
    xorr1 ^= x;

    for(int y:nums2)
    xorr2 ^= y;

    if(n1%2 == 0 && n2%2 == 0) return 0; //every element can be paired with another & all pairs cancel out.
    else if(n1%2 == 0) return xorr1; //the elements in nums2 contribute solely to the XOR result, so it returns xorr2
    else if(n2%2 == 0) return xorr2;
    else return xorr1 ^ xorr2;

}

int main(){
    vector<int>nums1={2,1,3};
    vector<int>nums2={10,2,5,0};
    
    cout<<xorAllNums(nums1,nums2);
}