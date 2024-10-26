#include<iostream>
int main(){
    using namespace std;

    int arr[5]={6,11,7,4,8};//works for both even or odd sized array
   int i=0,j=4;
   while(i<j){
    swap(arr[i],arr[j]);
    i++;
    j--;
   }
   for(i=0; i<5; i++){
    cout<<arr[i]<<" ";
   }
   }