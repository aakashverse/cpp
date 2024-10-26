#include<iostream>
#include<vector>
using namespace std;


int largestPalindrome(string s){

   vector<int>lower(26,0);
   vector<int>upper(26,0);

 for(int i=0; i<=s.size(); i++)
 {
   if(s[i]>='a')
    lower[s[i]-'a']++;

    else
    upper[s[i]-'A']++;
 }

 int count=0;
 int odd=0;
 for(int i=0; i<26; i++)
  {

   //lower
   if(lower[i]%2==0)
   count+=lower[i];

   else
   count+=lower[i]-1;
   odd=1;
 }

 //upper
 for(int i=0; i<26; i++)
  {
   if(upper[i]%2==0)
   count+=upper[i];

   else
   count+=upper[i]-1;
   odd=1;
  }

 return count;
}


int main()
{

char str[6]={'a','A','A','b','b','A'};


cout<<largestPalindrome(str);

    return 0;
}