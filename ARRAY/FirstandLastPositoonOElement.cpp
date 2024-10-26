#include<iostream>
using namespace std;

int firstOcurrence(int arr[],int n,int target,int first=-1,int last=-1){
    int start=0,end=n-1,mid=(start+end)/2;
 
 while(start<=end){
    if(arr[mid]==target){
    first=mid;
    end=mid-1;
 }

    else if(arr[mid]<target)
    start=mid+1;

    else
    end=mid-1;
  }
  return -1;
}

 
int lastOcurrence(int arr[],int n,int target,int first=-1,int last=-1){
int start=0,end=n-1,mid=(start+end)/2;
while(start<=end){
    if(arr[mid]==target){
    last=mid;
    start=mid+1;
}

    else if(arr[mid]<target)
    start=mid+1;

    else
    end=mid-1;
  }
  return -1;
}


int main(){
int arr[100];

int n;
cout<<"Enter the number of elements in array: ";
cin>>n;

cout<<"Enter the elements of array: ";
for(int i=0; i<n-1; i++){
cin>>arr[i];
}

int target;
cout<<"Enter the target element: ";
cin>>target;

int first=-1,last=-1;
cout<<firstoccurence(arr,n,target,first,last);
cout<<lastoccurence(arr,n,target,first,last);
return 0;
}