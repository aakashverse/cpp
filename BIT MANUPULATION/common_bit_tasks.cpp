#include<bits/stdc++.h>
using namespace std;

                        //BITMASKING
                 
bool isOdd(int n){
    return (n&1);
}

int getBit(int n,int i){
    int mask=(1<<i);
    bool bit=(n & mask)>0 ? 1:0;

    return bit;
}

int setBit(int n,int i){
    int mask=(1<<i);
    int res=(n|mask);
    return res;
}

int clearBit(int n,int i){
    int mask=~(1<<i);
    int res=(n&mask);
    return res;
}

int updateBit(int n,int i,int v){
    int mask=~(1<<i);
    int cleared_n=n&mask;
    int res=cleared_n | (v<<i);
    return res; 
}

int clearLastIBit(int n,int i){
    int mask=(-1<<i);

    return mask&n;
}

int clearItoJbit(int n,int i,int j){
    int ones=(~0);
    int a=ones<<(j+1);
    int b=(1<<i)-1;
    int mask=a|b;

    return n&mask;
}

int main(){
    int n=31;
    int i=1;
    int j=3;
    int v=0; 

    //cout<<isOdd(n)<<endl;
    //cout<<getBit(n,i)<<endl;
    //cout<<"Ans: "<<setBit(n,i)<<endl;
    //cout<<"Ans: "<<clearBit(n,i)<<endl;
    //cout<<"Ans: "<<updateBit(n,i,v)<<endl;
    //cout<<"Ans: "<<clearLastIBit(n,i)<<endl;
    cout<<"Ans: "<<clearItoJbit(n,i,j)<<endl;
}