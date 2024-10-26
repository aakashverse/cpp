#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int start,int mid,int end)
{
    //temp array which stores the element after merging
    vector<int>temp(end-start+1);
    int left=start,right=mid+1,index=0;

    while(left<=mid && right<=end)
    {
        if(arr[left]<=arr[right])
        {
        temp[index]=arr[left];
        index++,left++;
        }

        else
        {
        temp[index]=arr[right];
        index++,right++;
        }
    }

    //left part is not empty yet
    while(left<=mid)
    {
        temp[index]=arr[left];
        index++,left++;
    }
    //right part is not empty yet
     while(right<=end)
    {
        temp[index]=arr[right];
        index++,right++;
    }

    index=0;
    //filling of temp elements into actual array
    while(start<=end)
    {
        arr[start]=temp[index];
        start++,index++;
    }
}

void mergesort(int arr[],int start,int end)
{
    if(start==end)
    return;

    int mid=start+(end-start)/2;
    //left part
    mergesort(arr,start,mid);
    //right part
    mergesort(arr,mid+1,end);
    //for merge
    merge(arr,start,mid,end);
}

int main()
{
    int arr[6]={6,9,3,5,1,4};
    mergesort(arr,0,5);
    for(int i=0; i<6; i++)
    {
      cout<<arr[i]<<" ";
    }
}