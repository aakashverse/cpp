#include<iostream>
#include<stdbool.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
   
     if(n<1)
         return 0;
            
        while(n!=1)
        {
           if(n%2==1)
            cout<<"0";
        
            
            n=n/2;    
        }
        
        cout<<"1";
    }