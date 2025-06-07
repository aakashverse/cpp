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

int Query(int i,int l,int r,int start,int end,int SegTree[]){
    if(l>end || r<start)
    return 0;
    
    int mid = (l+r)/2;

    if(l>=start && r<=end)
    return SegTree[i];

    return Query(2*i+1,l,mid,start,end,SegTree) + Query(2*i+2,mid+1,r,start,end,SegTree);

}

int main(){
    int nums[] = {3,1,2,7,2,1,2,3};
    int start,end;
    cin>>start>>end;

    int n = sizeof(nums)/sizeof(nums[0]);
    int SegTree[2*n];
    BuildTree(0,0,n-1,nums,SegTree);
    
    cout<<"Segment Tree Array: "<<endl;
    for(int i=0;i<2*n-1;i++){
        cout<<SegTree[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Query Range Sum: "<<Query(0,0,n-1,start,end,SegTree);
    //TC: O(log(n))
}