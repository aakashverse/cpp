#include<iostream>
using namespace std;

int Peakindex(int arr, int n){
   int start=0, end=n-1, mid;
  
   while(start<=end){
 
 mid=start+(end-start)/2;

    //Peak element
    if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
    return mid;
    //Right side move
    start=mid+1;
    //left siden move
    end=mid-1;
   }
   return -1;

    }
 
int main(){
int arr[5]={4,6,8,2,3};
int n=5;
cout<<Peakindex(arr[5],n);


}