#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0)  //Base case [n=0 take care of n=1]
    return 1;
    
    return n*fact(n-1);

}
    
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n<0)
    {
        cout<<"factorial is not possible";
        return 0;
    }
    cout<<fact(n);
}