#include<iostream>
using namespace std;
int main(){
int A,B,count=0;
cin>>A;
cin>>B;
count+=min(8-A,8-B);
count+=min(8-A,1-B);
count+=min(A-1,8-B);
count+=min(A-1,B-1);

cout<<count;
}

