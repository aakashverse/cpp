#include<iostream>
using namespace std;

int search(int arr[][2],int row,int column,int target){

for( int i=0; i<row; i++)
{
    for(int j=0; j<column; j++)
    {

        if(arr[i][j]==target)
        {
       cout<<"Yes";
       return 0;
        }
    }
}
 cout<<"No";
}



int main(){

int arr[3][2]={13,14,54,76,23,44}; 
int target=1;
search(arr,3,2,target);

}
