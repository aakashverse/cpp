#include<bits/stdc++.h>
using namespace std;
//not an optimised code, optimised through DYNAMIC PROGRAMMING(DP)
//for positive numbers
int find(int arr[],int index,int n,int sum)
{
    // If 0 is present in the array
    /*if(index==n)
    {
        if(sum==0)
        return 1;
        else
        return 0;
    }*/
    
    //same as above 
    if(index==n)
    return sum==0; 
      
    return find(arr,index+1,n,sum)+find(arr,index+1,n,sum-arr[index]);

} 

int main()
{
    int arr[]={3,6,5,4};
    cout<<find(arr,0,4,9);
}