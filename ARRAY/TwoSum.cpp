#include<iostream>
using namespace std;


int Twosum(int arr[]){
//from two pointer method

// for(int j=0; j<4;j++){
       int target=22;
//     for(int i=4; i>0;i--){
//     if(arr[i]+arr[j]==target)
//     cout<<arr[i]<<" "<<arr[j]<<endl;
    
// }
// }

int start=0,end=4; 
while(start<=end){
    if(arr[start]+arr[end]==target)
    return 1;
    else if(arr[start]+arr[end]<target)
    start++;
    else end--;
}
return -1;
}
 
 int main(){
 int arr[6]={1,2,4,6,18,25};
 int n=6;
 cout<<Twosum(arr);
 }