#include<bits/stdc++.h>
using namespace std;
int main()
{  //starters 138
  int T;
  cin>>T;

  while(T--)
  {
    int X,Y;
    cin>>X>>Y;

    int t,numr,denr;
    numr=10*(Y-X);
    denr=(100-Y);
    t=numr/denr;

    if(t%2!=0)
    t++;

    cout<<t<<endl;
  }
}