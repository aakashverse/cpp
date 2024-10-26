#include<iostream>
 using namespace std;

int Rotatesearch(int arr,int n){
    int ans, start=0, end=n-1, mid;
    while(start<=end){
    mid=start+(end-start)/2;
    if(arr[mid]>=arr[0])
    start=mid+1;

    else 
    ans=arr[mid];
    end=mid-1;

}
}


int main(){
   
    int arr[100];

    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;


    cout<<"Enter the elements: "<<" ";
    for(int i=0; i<n; i++)
    cin>>arr[i];
   
    cout<<Rotatesearch(arr,n);
 return 0;
}