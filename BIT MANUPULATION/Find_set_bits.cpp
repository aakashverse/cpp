#include<bits/stdc++.h>
using namespace std;

// M-1
int countBits(int n){
    int ans=0;  //count of set bits

    while(n>0){
        ans+=(n&1);  //n&1 gives last bit, if it 1 then ans+=1 else ans+=0
        n=n>>1;   //rightshift n 
    }
    return ans;
}


//M-2
int countBitsFast(int n){
    int ans=0;
    while(n>0){
        n=n&(n-1);
        ans++;
    }
    return ans;
}

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<"No. of set bits in " <<n<<" are: "<<countBits(n)<<endl;
    cout<<"No. of set bits in " <<n<<" are: "<<countBitsFast(n)<<endl;
    cout<<"No. of set bits in " <<n<<" are: "<<__builtin_popcount(n)<<endl; //M-3 from built in funcn

}