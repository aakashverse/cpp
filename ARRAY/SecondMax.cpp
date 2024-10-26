#include<iostream>
int main(){
    using namespace std;
    int ans=-1;
    int arr[5]={6,11,7,4,8};
    for(int i=0; i<5; i++){
    if(arr[i]>ans)
    ans=arr[i];
    }
    int second=-1;
    for(int i=0; i<5; i++){
        if(ans!=arr[i])
        second=max(second,arr[i]);
    }
    cout<<second;
}