#include<iostream>
#include<cmath>
int main(){
    using namespace std;
    int arr[100];
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++)
    {
       cin>>arr[i];
    }
     //Selection sort sort
     
     for(int i=0; i<n-1; i++)  //for no of rounds
     {  
       int mindx=i;
       for(int j=i+1; j<n; j++)  //for finding minimum index
       { 
         if (arr[j]<arr[mindx])
         mindx=j;
       }

       swap(arr[i],arr[mindx]);
    }
    
    for(int i=0; i<n; i++){ 
    cout<<arr[i]<<" ";
    }
}