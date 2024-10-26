#include<iostream>
using namespace std;


void greet(int n){
    if(n==0){
    cout<<endl<<"Happy birthday..!";
    return;
    }

    else{
    cout<<n<<" "<<"days left for your birthday"<<endl;
    greet(n-1);
    }
}

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;
    greet(n);   
    }