#include<bits/stdc++.h>
using namespace std;

int countPairs(vector<int> &arr, int target) {
        // Your code here
        int n=arr.size();
        int count=0;
        
        sort(arr.begin(),arr.end());
        int i=0,j=n-1;
        
        while(i<j){
            int currSum=arr[i]+arr[j];
            
            if(currSum<target){
                count+=(j-i); //count all pairs in range i
                i++;
            }
            
            else
            j--;
        }
        
        return count;
    }


int main(){
    vector<int>arr={5,2,3,2,4,1};
    int target=5;
    cout<<countPairs(arr,target)<<endl;


}