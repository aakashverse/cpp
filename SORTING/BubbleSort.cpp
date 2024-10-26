#include<iostream>
int main(){
    using namespace std;
    int arr[5]={5,4,9,2,1};
    int i,j,n=5;

    //FOR BUBBLE SORT

    for(i=0; i<n-1; i++){     //for no of passes
        for(j=0; j<n-1-i; j++){     //for swapping the element
          if(arr[j]>arr[j+1])
          swap(arr[j],arr[j+1]);
        }
    }
        for(i=0; i<=n-1; i++){
            cout<<arr[i]<<" ";
        }
}