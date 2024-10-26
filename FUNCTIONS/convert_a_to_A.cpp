#include<iostream>
using namespace std;

int convert(char x){
    return x-32;
}


int main(){
char x;
cout<<"Enter a lowercase character: ";
cin>>x;
char ans=convert(x);
cout<<"The uppercase character for above is:"<<" "<<ans;
}
