#include<iostream>
using namespace std;
int main(){
int year;
cout<<"Enter Year: ";
cin>>year;
if(year%400==0){
    cout<<"a Leap year";
}
else if(year%4==0 && year%100!=0){
    cout<<"a Leap year";
}
else{
    cout<<"Not a Leap year";
}

}