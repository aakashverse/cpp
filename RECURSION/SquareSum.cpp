#include<iostream>
using namespace std;

int Sqsum(int n)
{
    if(n==1)   //Base Case
    {
        return 1;
    }

    return n*n+Sqsum(n-1);
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

   cout<<Sqsum(n);
}