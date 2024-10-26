#include<bits/stdc++.h>
using namespace std;
// No Repetition --> total subset sum of n size array=2^n //

void SubsetSum(int arr[],int sum,vector<int>&ans,int index,int n)
{
    if(index==n)
    {
        ans.push_back(sum);
        return;
    }
    //Not Included
    SubsetSum(arr,sum,ans,index+1,n);
    //Included
    SubsetSum(arr,sum+arr[index],ans,index+1,n);
}


int main()
{
    int arr[]={3,1,4,2,5};
    vector<int>ans;
    SubsetSum(arr,0,ans,0,5);

    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";

    //cout<<ans.size(); total 2^5=32

}