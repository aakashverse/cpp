#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int sum=INT_MIN,idx=0;
    for(int row=0; row<3; row++)
    {
        int totalSum=0;
         for(int col=0; col<3; col++)
         { 
            totalSum+=arr[row][col];

            if(sum<totalSum)
            sum=totalSum;
            idx=row;
         }
         
    }
    cout<<idx;



}
