#include<iostream>
using namespace std;

int main()
{
    int A,B;
    cin>>A;
    cin>>B;

    int rA=((A%10)*10+(A/10));
    int rB=((B%10)*10+(B/10));

    cout<<rA<<" "<<rB<<endl;
    
    if((A>B) || (A>rB) || (rA>B) || (rA>rB))
    cout<<"Yes";
    
    else
    cout<<endl<<"No";

}