#include<iostream>
using namespace std;
int main(){
    

    int arr[7]={4,6,2,7,8,9,3};
    int n=7;
    int temp=arr[n-1];
    for(int i=n-1; i>=0; i--){
        arr[i+1]=arr[i];
    }
     
    arr[0]=temp;

 for(int i=0; i<n; i++)
  cout<<arr[i]<<" ";
}