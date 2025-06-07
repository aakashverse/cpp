#include<bits/stdc++.h>
using namespace std;

void BuildTree(int i,int l,int r,int nums[],int SegTree[]){
    if(l == r){
        SegTree[i] = nums[l];
        return;
    }

    int mid = l+(r-l)/2;
    BuildTree(2*i+1,l,mid,nums,SegTree);
    BuildTree(2*i+2,mid+1,r,nums,SegTree);
    SegTree[i] = SegTree[2*i+1] + SegTree[2*i+2];
}

void update_Range(int i,int start,int end,int l,int r,int val,int SegTree[],int LazyTree[]){
    // updating 
    if(LazyTree[i] != 0){
        SegTree[i] += (r-l+1)*LazyTree[i];
        if(l != r){
            LazyTree[2*i+1] += LazyTree[i];
            LazyTree[2*i+2] += LazyTree[i];
        }
        LazyTree[i] = 0;
    }

    // out of range
    if(l>end || r<start || l>r)
    return;
    
    // updating
    if(start<=l && end>=r){
        SegTree[i] += (r-l+1)*val;
        if(l!=r){
            LazyTree[2*i+1] += val;
            LazyTree[2*i+2] += val;
        }
        return;
    }

    //overlapping
    int mid  = l+(r-l)/2;
    update_Range(2*i+1,start,end,l,mid,val,SegTree,LazyTree);
    update_Range(2*i+2,start,end,mid+1,r,val,SegTree,LazyTree);
    SegTree[i] = SegTree[2*i+1]+SegTree[2*i+2];
    return;
}

int main(){
    int nums[] = {3,4,2,5,3,6,3,4};
    int n = sizeof(nums)/sizeof(nums[0]);
    int start,end,val;
    cin>>start>>end>>val;
    int SegTree[4*n],LazyTree[4*n]={0};
    BuildTree(0,0,n-1,nums,SegTree);
    update_Range(0,start,end,0,n-1,val,SegTree,LazyTree);
}