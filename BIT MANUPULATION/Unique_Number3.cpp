#include<bits/stdc++.h>
using namespace std;

int main(){
    int cnt[64]={0}; //sum array of bits of numbers
    
    int n,no;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>no;
        int j=0;
        //update cout array by extracting bits 
        while(no>0){
            int last_bit=(no&1);
            cnt[j]+=last_bit;
            j++;
            no=no>>1;
        }
    }

    //Eliminate 3N numbers and form the answer by converting 0s and 1s into number
    int p=1;
    int ans=0;
    for(int i=0;i<64;i++){
        cnt[i]%=3;
        ans +=(cnt[i]*p);
        p=p<<1;   //same as p=p*2

    }
     
    cout<<ans;
    
}