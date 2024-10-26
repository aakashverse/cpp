#include<iostream>
using namespace std;
int main(){
    int n;
cout<<"Enter a number: ";
cin>>n;
        if(n==0)
            cout<<"False";
        
        int rem,ans=0,mul=1;
        while(n!=0){
            rem=n%2;
            rem=rem^1;
            n=n/2;
            ans=ans+rem*mul;
            mul=mul*2;
            
        }
        cout<<"The number after performing complent is: "<<ans;
    }