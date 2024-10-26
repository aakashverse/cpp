#include<iostream>
using namespace std;
int main(){
int n,last=0,curr=1,prev=1;
cout<<"Enter a number: ";
cin>>n;
//for(int i=1; i<=n; i++){
    curr=last+prev;
    last=last+prev;
    prev=curr;
cout<<curr<<" ";
}