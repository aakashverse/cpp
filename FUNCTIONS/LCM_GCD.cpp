#include<bits/stdc++.h>
using  namespace std;

long long GCD(long long A , long long B)
  {
      if(B==0)
      return A;
      
      return GCD(B,A%B);
  }
  
  long long LCM(long long A , long long B)
  {
      return (A/GCD(A,B)*B);
  }
  
int main()
{
    long long A,B;
    cout<<"Enter first number: ";
    cin>>A;
    cout<<"Enter second number: ";
    cin>>B;
        vector<long long>ans;
        ans.push_back(LCM(A,B));
        ans.push_back(GCD(A,B));
        
        for(int i=0;i<ans.size();i++)
        {
            cout<<"LCM: "<<ans[i]<<" ";
        }
}