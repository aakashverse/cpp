#include<iostream>
using namespace std;
int main(){
int n,pow,ans;
cout<<"Enter a number: ";
cin>>n;
cout<<"Enter power: ";
cin>>pow;
ans=n;
for(int i=1; i<pow; i++){
    ans=ans*n;
}
cout<<ans;
}