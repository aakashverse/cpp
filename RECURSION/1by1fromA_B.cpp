#include<bits/stdc++.h>
using namespace std;

 void create1by1(int arr1[],int arr2[],int n,int m,vector<int>&ans,int index)
 {
    if(index==n || index==m)
    return;
    
    for(int i=index;i<n;i++)
    {
        if(arr1[i]>arr2[i])
        ans.push_back(arr1[i]);
    
        create1by1(arr1,arr2,n,m,ans,index++);
    }

    
   
 }

int main()
{
    int arr1[]={10,15,25};
    int arr2[]={1,5,20,30};
    int n=3,m=4,index=0;
    
    vector<int>ans;
    create1by1(arr1,arr2,n,m,ans,index);

    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
}