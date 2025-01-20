#include<bits/stdc++.h>
using namespace std;
// count no of subarrays found with given value of XOR
long subarrayXor(vector<int> &arr, int k) {
       
    int n=arr.size();
    unordered_map<int,int>XORmap;
    int currXOR=0,count=0;
        
    for(int num:arr){
        currXOR^=num;
            
        if(currXOR==k)
        count++;
            
        int desiredXOR=currXOR^k;
            
        if(XORmap.find(desiredXOR) != XORmap.end())
            count+=XORmap[desiredXOR];
            
            XORmap[currXOR]++;
        }
        
        return count;
    }

int main(){
    vector<int>arr={4,2,2,6,4};
    
    //target XOR
    int k=6;

    cout<<subarrayXor(arr,k)<<" subarrays found with XOR:"<<k<<endl;
    //TC=O(n)
}