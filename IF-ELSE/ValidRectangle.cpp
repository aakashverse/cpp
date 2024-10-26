#include<iostream>
using namespace std;
int main(){
int L1,L2,B1,B2;
cout<<"Enter length & breadth of the Rectangle: ";
cin>>L1>>L2>>B1>>B2;
if((L1==L2 && B1==B2)|| (L1==B1 && L2==B2)|| (L1==B2 && L2=B1)){
    cout<<"Valid rectanle";
}
    else cout<<"rectangle not possible";

}