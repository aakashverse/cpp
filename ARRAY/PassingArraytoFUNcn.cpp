#include<iostream>
 using namespace std;

void fun(int arr[],int n){// not passing the array here but the address of it i.e POINTER
    cout<<sizeof(arr)<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
   

    int arr[5]={1,3,2,5,6};
    cout<<sizeof(arr)<<endl;
        fun(arr,5);
    }
