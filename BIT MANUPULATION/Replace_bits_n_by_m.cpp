#include<bits/stdc++.h>
using namespace std;


int clearItoJbit(int n,int i,int j){
    int ones=(~0);
    int a=ones<<(j+1);
    int b=(1<<i)-1;
    int mask=a|b;
    int ans=n&mask;

    return ans;
}

int ReplaceBits(int n,int m,int i,int j){
    int n_=clearItoJbit(n,i,j);
    int ans=n_|(m<<i);

    return ans;
}

int main(){

    int n=15;
    int i=1,j=3;
    int m=2;

    cout<<ReplaceBits(n,m,i,j)<<endl;


}