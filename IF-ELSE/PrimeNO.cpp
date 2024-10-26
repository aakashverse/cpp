#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter a number: ";
cin>>n;
if(n<2){
cout<<"a prime number";
return 0;
}
else{
    for(int i=2; i<=n-1; i++){
        if(n%i==0){
            cout<<"not a prime number";
            return 0;
        }
    }
       cout<<"a prime number";
       return 0;
}
}