#include<iostream>
using namespace std;
int main(){
char ch;
cout<<"enter alphabet: ";
cin>>ch;
if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
    cout<<"vowel";
}
else{
    cout<<"Consonant";
}
}