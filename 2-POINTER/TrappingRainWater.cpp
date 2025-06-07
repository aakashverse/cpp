#include<bits/stdc++.h>
using namespace std;

int maxWater(vector<int> &arr) {
        
    int n=arr.size();
    int traph2o=0;
    int left=0,right=n-1;
    int left_max=0,right_max=0;
        
    while(left<right){
            
        if(arr[left]<arr[right]){
            if(arr[left]>left_max)
            left_max=arr[left];
            else
            traph2o+=left_max-arr[left];
                
            left++;
            }

        else{
            if(arr[right]>right_max)
            right_max=arr[right];
            else
            traph2o+=right_max-arr[right];
                
            right--;
        }
    }
        return traph2o;
        
}

int main(){
    vector<int>arr={3,0,1,0,4,0,2};
    cout<<"Traped Water: "<<maxWater(arr)<<endl;

}