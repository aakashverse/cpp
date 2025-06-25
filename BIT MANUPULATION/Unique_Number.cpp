#include<bits/stdc++.h>
using namespace std;
 
// Problem- Unique Number 2N+1
//Given a list of numbers where every number occurs twice except one, find that number
//concept- bitwise xor of same numbers are equl to  zero
int main(){
    
    int n;
    cin>>n;

    int arr[n];
    int num=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        num=num^arr[i];
    }
    
    cout<<"The missing number is: "<<num<<endl;
    
}