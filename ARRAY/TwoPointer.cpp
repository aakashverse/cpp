#include<iostream>
using namespace std;
 
int twopointer(int arr[]){
int start=0, end=5;

while(start<=end){
if(arr[start]==0)
start++;
else{
    if(arr[end]==0)
    swap(arr[start],arr[end]);
    else
    end--;
}
}
}

 int main(){
 int arr[6]={1,0,0,1,0,1};
twopointer(arr);
  for(int i=0; i<6; i++){
  cout<<arr[i]<<" ";
  }
 }
 