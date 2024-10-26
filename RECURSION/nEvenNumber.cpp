#include<iostream>
using namespace std;

void evenNum(int n)
{
   if(n==0)
   {
    cout<<endl<<"Task completed..";
    return;
   }
   cout<<n<<endl;
   evenNum(n-2);
} 

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    evenNum(n);
}