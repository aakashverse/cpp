#include<iostream>
using namespace std;

int main(){
    int a=5;
    cout<<a<<endl;  //Address of a print hoga

    int *ptr;
    ptr=&a;  //pointer ptr me a ka address store h
    cout<<ptr<<endl;

    int b=9;
    int *p;
    p=&b;

    cout<<p<<endl;
    *p=12; //pointer p points to 9 but modified the valule i.e make it 12
    cout<<*p<<endl;
}