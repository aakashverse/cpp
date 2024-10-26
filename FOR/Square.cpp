#include<iostream>
using namespace std;
int main(){
int n,sqr;
cout<<"enter a number: ";
cin>>n;
for(int i=1; i<=n; i++){
  sqr=i*i;
  cout<<i<<" square is: "<<sqr<<endl;
}
}