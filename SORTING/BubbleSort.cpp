#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    if(n == 1)
    return;

    for(int i=0;i<n-1;i++){   //  one pass after which largest element is at last
        if(arr[i] > arr[i+1])
        swap(arr[i],arr[i+1]);
    }

    bubbleSort(arr,n-1); // for remaining array
}

void display(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5]={5,4,9,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    // iteratively
    for(int i=0; i<n; i++){     //for no of passes
        for(int j=0; j<n-1-i; j++){     //for swapping the element
          if(arr[j]>arr[j+1])
          swap(arr[j],arr[j+1]);
        }
    }
    display(arr,n);

    //Recursive
    bubbleSort(arr,n);
    display(arr,n);
}