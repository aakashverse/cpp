#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
    using namespace std;

vector<int>suminsubarray (vector<int>&v,int prefix)
{
    int prefix=0;
    int maxi=INT_MIN;
    int n=v.size();
    for(int i=0; i<n; i++)
   
   for(int j=i; j<n; j++){
   prefix=v[j];
   maxi=max(maxi,prefix);
   }

cout<<maxi;
}

int main(){
  int n, prefix=0;;
  cout<<"Enter the size of array: ";
  cin>>n;
    
vector<int>v(n);
for(int i=0; i<n; i++)
cin>>v[i];
cout<<suminsubarray(v);

}

   