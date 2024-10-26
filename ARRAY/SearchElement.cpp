#include<iostream>
int main(){
    using namespace std;
    int element;
     cout<<"Enter the element that you want to search in the array: ";
    cin>>element;
    int arr[5]={2,5,8,3,9};
    for(int i=0; i<5; i++){
    if(arr[i]==element)
    cout<<i;
    }
}
