#include<iostream>
int main(){
    using namespace std;
    int arr[5]={5,1,2,7,9};
    int i,n=5;

    //FOR INSERTION SORT

    for(i=0; i<n; i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            swap(arr[j],arr[j+1]);
            j--;
        }
        arr[j+1]=key;
    }
       for(i=0; i<n; i++){
          cout<<arr[i]<<" ";
       }
    }