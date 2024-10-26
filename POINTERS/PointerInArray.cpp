#include<iostream>
using namespace std;
int main()
{
    int arr[4]={5,8,2,7};
    int *ptr=arr;
    
    //Printing the element & its address at 0th index:-

    cout<<arr[0]<<endl;
    cout<<arr[0]+0<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr<<endl;

    //print the adress of second element
    cout<<arr+1<<endl;
    cout<<&arr[1]<<endl;


    //print the value of 0 index
    cout<<arr[0]<<endl;
    cout<<*(arr)<<endl;
    cout<<(arr+0)<<endl;
    cout<<*ptr<<endl;

    //print index of all the elements
    for(int i=0;i<4;i++)
    {
        cout<<arr+i<<endl;
    }

    //print all the value
     for(int i=0;i<4;i++)
    {
        cout<<*(arr+i)<<endl;
    }

}