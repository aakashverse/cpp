#include<iostream>
using namespace std;

int fibo(int n)
{
    if(n==0 || n==1){
        return 1;
        
    }

    return fibo(n-1)+fibo(n-2);
   
}

int main()
{
    int n;
    cout<<"Enter the fibonacci term that you want: ";
    cin>>n;

    cout<<fibo(n)<<" ";

}