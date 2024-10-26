#include<bits/stdc++.h>
using namespace std;
//BRUTE FORCE METHOD with time complexity O(nm)
 int stringMatch(string s1, int n,string s2, int m)
 {
 
    for(int i=0; i<=n-m; i++)
    {
      int first=i,second=0;
      while(second<m)
      {
         if(s1[first]!=s2[second])
         {
         break;
         }

         else
         first++,second++;
      }
   
     if(second==m)
     {
     return first-second;
     break;
     }
    }
    return -1;
 }
   
int main()
 {    string s1="abacdabad";
    string s2="abad";
    int n=s1.size(),m=s2.size();
     cout<<stringMatch(s1,n,s2,m)<<endl;
}