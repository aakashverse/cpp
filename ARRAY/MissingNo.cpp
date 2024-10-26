#include<iostream>
int main(){
    using namespace std;

    int sum1=0,sum2=0;
    int arr[6]={1,3,2,5,6};
    int n=6;
    for(int i=0; i<=5; i++){
        sum1+=arr[i]; 
    }
   sum2=n*(n+1)/2;
    cout<<sum2-sum1;
}