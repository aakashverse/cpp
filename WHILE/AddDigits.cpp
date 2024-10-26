#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
        while(num>9){//gives final ans in sigle digit
        int rem,ans=0;
        while(num!=0){
            rem=num%10;
            ans=ans+rem;
            num=num/10;
        }
            num=ans;
        }
        cout<<num;
    }