#include<iostream>
using namespace std;

int Pairdifference(int arr,int n){
  
    while(end<n){

        int start=0,end=1,target=45;

        if(arr[end]-arr[start]==45)
        return 1;

        else if(arr[end]-arr[start]<45)
        end++;

        else
        start++;
    }
return -1;
}
   


int main(){

int arr[5]={5,10,3,2,7};
int n=5,i,j;
 
 for(i=0; i<n-1; i++)
 {     //for no of passes
        for(j=0; j<n-1-i; j++)
        {     //for swapping the element
          if(arr[j]>arr[j+1])
          swap(arr[j],arr[j+1]);
        }
 }
 for(i=0; i<=n-1; i++)
 cout<<arr[i]<<" ";
cout<<Pairdifference(arr,n);


}