#include<iostream>
using namespace std;

//sum of n natural number by RECURSION:-

int sum(int n)
{
    if(n==1)
    {
     return 1;
    }

    return n+sum(n-1);
}


int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<sum(n);
}
