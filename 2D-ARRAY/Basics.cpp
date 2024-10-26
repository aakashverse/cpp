#include<iostream>
using namespace std;

int main(){
int arr[3][3]={1,2,3,4,5,6,7,8,9};
int row=3,column=3;

for(int i=0; i<row; i++){
    for(int j=0; j<column; j++){
        cout<<arr[i][j]<<" ";
    }
}
cout<<endl;
cout<<arr[2][3];



}