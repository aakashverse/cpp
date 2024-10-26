#include<iostream>
using namespace std;

void Printeven(int num1,int n)
{
    if(num1>n)
    {
    return;
    }

    // if(num%2==0){
     cout<<num1<<" ";
    Printeven(num1+2,n);
   
    
}

void Printodd(int num2,int n)
{
    if(num2>n)
    {
    return;
    }
     
    Printeven(num2-2,n);
    cout<<num2<<" ";
   
    
}


int main(){
    int num1=2,num2=1,n;
    cout<<"Enter a number upto which you want to print even & odd number: ";
    cin>>n;

    Printeven(num1,n);
    cout<<endl;
    Printodd(num2,n);
}