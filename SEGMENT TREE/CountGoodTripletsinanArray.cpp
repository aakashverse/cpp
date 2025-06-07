#include<bits/stdc++.h>
using namespace std;

        // O(logn)
        void updateSegmentTree(int i,int l,int r,int idx,vector<long long>&segmentTree){
            if(l == r){
                segmentTree[i]  = 1; // mark visited
                return;
            }
    
            int mid = l+(r-l)/2;
            if(idx<=mid){
                updateSegmentTree(2*i+1,l,mid,idx,segmentTree);
            }
            else{
                updateSegmentTree(2*i+2,mid+1,r,idx,segmentTree);
            }
    
            segmentTree[i] = segmentTree[2*i+1]+segmentTree[2*i+2];
        }  
        
        // O(logn)
        long long querySegmentTree(int qs,int qe,int i,int l,int r,vector<long long>&segmentTree){
            if(r<qs || l>qe){
                return 0;
            }
    
            if(l>=qs && r<=qe){
                return segmentTree[i];
            }
    
            int mid = l+(r-l)/2;
            long long left  = querySegmentTree(qs,qe,2*i+1,l,mid,segmentTree);
            long long right = querySegmentTree(qs,qe,2*i+2,mid+1,r,segmentTree);
    
            return left+right;
        }
    
    
    
        long long goodTriplets(vector<int>& nums1, vector<int>& nums2) {
            unordered_map<int,int>mp;
            int n = nums1.size();
    
            for(int i=0;i<nums1.size();i++){
                mp[nums2[i]] = i; 
            }
            
            vector<long long>segmentTree(4*n);
            updateSegmentTree(0,0,n-1,mp[nums1[0]],segmentTree);
            long long result = 0;
    
            //segment tree
            for(int i=1;i<n;i++){  // TC: O(n*logn)
                int idx = mp[nums1[i]];
    
                long long leftCommonCount = querySegmentTree(0,idx,0,0,n-1,segmentTree);
                long long leftUncommonCount = i - leftCommonCount;
                long long elementsAfterIdxNums2 = (n-1)-idx;
                long long rightCommonCount = elementsAfterIdxNums2 - leftUncommonCount; 
                result += leftCommonCount*rightCommonCount;
    
                updateSegmentTree(0,0,n-1,idx,segmentTree);
            }
    
            return result;
            
        }
