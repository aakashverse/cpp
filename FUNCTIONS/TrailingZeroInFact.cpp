#include<iostream>
#include<cmath>
using namespace std;

int trailingzero(int num){
    int count=0;
    while(num>=5){
        count+=num/5;
        num/=5;
    }
    return count;
}


int main(){
int num;
cout<<"Enter a number: ";
cin>>num;
int ans=trailingzero(num);
cout<<ans;
}