#include<bits/stdc++.h>
using namespace std;

bool subsetsum(int arr[],int index,int n,int targetSum)
{
    if(targetSum==0)
    return 1;

    if(index==n||targetSum<0)
    return 0;
    
    //Include or exclude the current element
    return subsetsum(arr,index+1,n,targetSum)||subsetsum(arr,index+1,n,targetSum-arr[index]);
}

int main()
{
    int arr[]={2,3,4};
    int targetSum=15;
    
    if (subsetsum(arr,0,3,targetSum))
    cout<<"Subset with given sum exists"<<endl;
    else 
    cout<<"No Subset with given sum exists"<<endl;
    
    
}
