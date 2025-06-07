#include<bits/stdc++.h>
using namespace std;

void BuildTree(int i,int l,int r,int SegTree[],int nums[]){
    if(l == r){
        SegTree[i] = nums[l];
        return;
    }

    int mid = (l+r)/2;
    BuildTree(2*i+1,l,mid,SegTree,nums);
    BuildTree(2*i+2,mid+1,r,SegTree,nums);
    SegTree[i] = SegTree[2*i+1]+SegTree[2*i+2];
    
}

int main(){
    int nums[] = {3,1,2,7};
    int n = sizeof(nums)/sizeof(nums[0]);
    int SegTree[2*n];
    BuildTree(0,0,n-1,SegTree,nums);

    for(int i=0;i<2*n-1;i++)
    cout<<SegTree[i]<<" ";
}