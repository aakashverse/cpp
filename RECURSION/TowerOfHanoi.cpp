#include<bits/stdc++.h>
using namespace std;

void Toh(int n,int source,int help,int dest)
{
    if(n==1)
    {
        cout<<"move disk "<<n<<" from rod "<<source<<" to "<<dest<<endl;
        return;
    }
    
    Toh(n-1,source,dest,help);
    cout<<"move disk "<<n<<" from rod "<<source<<" to "<<dest<<endl;
    Toh(n-1,help,source,dest);
}

int main()
{
    int n;
    cout<<"Enter number of disk: ";
    cin>>n;
    Toh(n,1,2,3);
}
