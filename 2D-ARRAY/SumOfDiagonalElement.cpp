#include<iostream>
using namespace std;



void diagonalSum(int Matrix[][4],int row,int col)
{
   int first=0;
   int second=0;
   
   //first diagonal sum
   int i=0;
   while(i<row)
   {
    first+=Matrix[i][i];
    i++;
   }

   //second diagonal sum
   i=0; 
   int j=col-1;

   while(j>=0)
   {
   second+=Matrix[i][j];
   i++,j--;
   }
cout<<first<<" "<<second<<" ";
}


int main(){

int Matrix[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

diagonalSum(Matrix,3,4);


}