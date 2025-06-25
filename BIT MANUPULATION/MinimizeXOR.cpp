#include<bits/stdc++.h>
using namespace std;

//LC-2429 (Good problem to revise BIT Manupulation)
//T.C:O(log(n)) i.e. no of bits of number n
/*Given two positive integers num1 and num2, 
find the positive integer x such that:
x has the same number of set bits as num2, and
The value (x XOR num1) is minimal.*/

bool isSet(int x,int pos){
    return x&(1<<pos);
}

void setBit(int &x,int pos){
    x=x|(1<<pos);
}

void UnsetBit(int &x,int pos){
    x=x&(~(1<<pos));
}

int minimizeXor(int num1, int num2) {
    int x=num1;
    int reqSetbit=__builtin_popcount(num2);
    int curSetbit=__builtin_popcount(x);

    int bit=0; //position of bit
    if(curSetbit<reqSetbit){
        while(curSetbit<reqSetbit){
            if(!isSet(x,bit)){
                setBit(x,bit);
                curSetbit++;
            }
            bit++;
        }
    }
    else if(curSetbit>reqSetbit){
        while(curSetbit>reqSetbit){
            if(isSet(x,bit)){
                UnsetBit(x,bit);
                curSetbit--;
            }
            bit++;
        }
    }
    return x;
}

int main(){
      int num1,num2;
      cin>>num1>>num2;
      

      cout<<minimizeXor(num1,num2)<<endl;

}