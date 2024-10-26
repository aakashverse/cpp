#include<iostream>
using namespace std;

int pow(int num,int i)
{
    if(i==0)
    {
        return 1;
    }
    return num*pow(num,i-1);
}

int main()
{
    //int n=2;
    int i;
    cout<<"Enter i: ";
    cin>>i;
    cout<<pow(2,i);
}