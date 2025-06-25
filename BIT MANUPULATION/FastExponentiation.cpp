#include<bits/stdc++.h>
using namespace std;

int power_optimised(int a,int n){
    int ans=1;
    while(n>0){
        int last_bit=(n&1);
        if(last_bit){
            ans*=a;
        }
        a=a*a; //square up
        n=n>>1; //Discard the last bit of n
    }
    return ans;
}

int main(){
    int a,n;
    cin>>a>>n;

    cout<<power_optimised(a,n)<<endl;
}