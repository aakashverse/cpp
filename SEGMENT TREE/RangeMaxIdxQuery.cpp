#include<bits/stdc++.h>
using namespace std;

void BuildIdxST(int i,int l,int r,int SegTree[],int nums[]){
    if(l == r){
        SegTree[i] = l;
        return;
    }

    int mid = l+(r-l)/2;
    BuildIdxST(2*i+1,l,mid,SegTree,nums);
    BuildIdxST(2*i+2,mid+1,r,SegTree,nums);
    int leftMaxIdx = SegTree[2*i+1];
    int rightMaxIdx = SegTree[2*i+2];
    if(nums[leftMaxIdx]>=nums[rightMaxIdx]) 
    SegTree[i] = leftMaxIdx;
    else 
    SegTree[i] = rightMaxIdx;
}

int RangeMaxIdx(int i,int start,int end,int l,int r,int SegTree[],int nums[]){
    if(l>end || r<start)
    return -1;

    if(l>=start && r<=end)
    return SegTree[i];
    
    int mid = l+(r-l)/2;

    int leftMaxIdx  = RangeMaxIdx(2*i+1,start,end,l,mid,SegTree,nums);
    int rightMaxIdx = RangeMaxIdx(2*i+2,start,end,mid+1,r,SegTree,nums);
    if(leftMaxIdx == -1) return rightMaxIdx;
    if(rightMaxIdx == -1) return leftMaxIdx;
    if(nums[leftMaxIdx]>=nums[rightMaxIdx])
    return leftMaxIdx;
    else return rightMaxIdx;

}


int main(){
    int nums[] = {3,1,2,7,4,9,2,8,6};
    int start,end;
    cin>>start>>end;

    int n = sizeof(nums)/sizeof(nums[0]);
    int SegTree[2*n];
    BuildIdxST(0,0,n-1,SegTree,nums);
    cout<<RangeMaxIdx(0,start,end,0,n-1,SegTree,nums);
}