#include<bits/stdc++.h>
using namespace std;
 
/*void PrintElement(int arr[],int index,int n)
{  //for printing elements of array by recursion
    if(index==n)
    return;

   //for Reverse Printing
   //PrintElement(arr,index+1,n);
    cout<<arr[index]<<" ";
    PrintElement(arr,index+1,n);
}
*/

/*int sumElement(int arr[],int index,int n)
{  //for printing sum of element of array by recursion
   int sum=0;
   if(index==n)
   return 0;
   else
   return arr[index]+sumElement(arr,index+1,n);
}*/

int MinElement(int arr[],int index,int n)
{  //for printing minimum element of array by recursion
    if(index==n-1)
    return arr[index];

    return min(arr[index],MinElement(arr,index+1,n));
}

int main()
{
    int arr[5]={3,7,1,9,6};
    int n=5,index=0;
   //PrintElement(arr,index,n);
    //cout<<endl<<sumElement(arr,index,n)<<endl;
    cout<<MinElement(arr,index,n);
};