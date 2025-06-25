#include<bits/stdc++.h>
using namespace std;

int numDifference(int n) {
        
    int num=n;
    int ans=0;
    int p=1;
    while(num>0){
        int last_bit=((num&1)^1); //last bit extract and its flipping
        ans+=(last_bit)*p;
        p*=2;
        num=num>>1;
    }
        
    return n-ans;
    
}

int main(){
    int n;
    cin>>n;

    cout<<numDifference(n)<<endl;
}