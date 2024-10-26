#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int N,int X,int start,int end)
{
    int mid=(start+(end-start)/2);  //for integer overflow
    
    if(start>end)
    return 0;

    if(arr[mid]==X)
    return mid;
    
    else if(arr[mid]>X)
    return binarysearch(arr,N,X,start,mid-1);

    else
    return binarysearch(arr,N,X,mid+1,end);

}

int main()
{
    int arr[6]={3,8,11,15,20,22};
    int N=6;
    cout<<binarysearch(arr,N,3,0,N-1)<<endl;
}