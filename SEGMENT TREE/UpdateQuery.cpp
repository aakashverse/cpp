#include<bits/stdc++.h>
using namespace std;


void updateQuery(int idx,int val,int i,int l,int r,int SegTree[]){
    if(l == r){
        SegTree[i] = val;
        return;
    }

    int mid = l+(r-l)/2;
    if(mid<=idx){
        updateQuery(idx,val,2*i+1,0,mid,SegTree);
    }
    else{
        updateQuery(idx,val,2*i+2,mid+1,r,SegTree);
    }

    SegTree[i] = SegTree[2*i+1] + SegTree[2*i+2];

}

int main(){
    int nums[] = {3,1,2,7};
    int n = sizeof(nums)/sizeof(nums[0]);
    int SegTree[2*n];
    updateQuery(0,5,0,0,n-1,SegTree);

    for(int i=0;i<2*n-1;i++)
    cout<<SegTree[i]<<" ";
}