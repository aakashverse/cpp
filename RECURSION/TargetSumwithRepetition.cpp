#include<bits/stdc++.h>
using namespace std;

int TarSubsum(int arr[],int index,int n,int sum)
{
    if(sum==0)
    return 1;

    if(index==n||sum<0)
    return 0;

    return TarSubsum(arr,index+1,n,sum)+TarSubsum(arr,index+1,n,sum-arr[index]);
}

int main()
{
    int arr[]={2,4,5,7};
    int sum=12; //target sum
    cout<<TarSubsum(arr,0,4,sum);
}