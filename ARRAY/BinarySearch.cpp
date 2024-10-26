#include<iostream>
using namespace std;

int Binarysearch(int arr[],int n,int key)
{
    int start=0, end=n-1, mid;

    while(start<=end)
    {
        mid=(start+end)/2; /// OR mid= start+ (end-start)/2 for overflow conditon
        if(arr[mid]==key)
        {
            return mid;
        }

        else if(arr[mid]<key)
        {
            start=mid+1;
        }

        else
        end=mid-1;
    }
    return -1;
}

 int main(){
    int arr[100];

    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;


    cout<<"Enter the elements: "<<" ";
    for(int i=0; i<n; i++)
    cin>>arr[i];
    
    int key;
    cout<<"Enter your key element: ";
    cin>>key;

    cout<<Binarysearch(arr,n,key);
    return 0;
   
}
    
