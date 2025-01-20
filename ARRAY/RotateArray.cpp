#include<bits/stdc++.h>
using namespace std;

void rotateArr(vector<int>&arr,int d) {

        int n=arr.size();
        
        //Handle case when d>n
        d%=n;
        vector<int>temp(n);
        
        // copy n-d elements into front of temp
        for(int i=0;i<n-d;i++){
            temp[i]=arr[d+i];
        }
        
        //copy first d elements to back of temp
        for(int i=0;i<d;i++){
            temp[n-d+i]=arr[i];
        }
        
        for(int i=0;i<n;i++){
            arr[i]=temp[i];
        }
        
    }

int main(){
    vector<int>arr={1,2,3,4,5};
    rotateArr(arr,2);

    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";

}