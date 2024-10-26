#include<bits/stdc++.h>
using namespace std;

bool LinearSearch(int arr[],int index,int key)
{
    if(index==-1)
    return 0;


    if(arr[index]==key)
    return 1;
    

    return LinearSearch(arr,index-1,key);
}


int main()
{
    int arr[5]={7,3,2,9,1};
    cout<<LinearSearch(arr,4,3)<<endl;
}