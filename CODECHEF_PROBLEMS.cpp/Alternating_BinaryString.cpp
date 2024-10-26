#include<iostream>
using namespace std;

int main()
{
    int n,count=0;
    string S;
    cin>>S;

    for(int i=0; i<n; i++)
    {
     if(S[i]==S[i-1])
       count++;
    }

    cout<<count;
}