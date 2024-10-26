#include<bits/stdc++.h>
using namespace std;

/*bool checkPal(string str,int start,int end)
{   //for PALLINDROME

   //base condition
   if(start>=end)
   return 1;
   
   //not matched
   if(str[start]!=str[end])
   return 0;
   
   //matched
   else
   return checkPal(str,start+1,end-1);

}*/

/*int countVowels(string str,int index)
{   //for count vowel in a string

    //base condition
    if(index==-1)
    return 0;
    //Vowel hoga
    if(str[index]=='a'|| str[index]=='e'|| str[index]=='i'|| str[index]=='o'|| str[index]=='u')
    return 1+countVowels(str,index-1);
    //nhi hoga
    else
    return countVowels(str,index-1);

}*/

/*void reverse(string &str,int start,int end)     &--> for the PASS BY REFERENCE
{   //for reversing a string

    if(start>=end)
    return ;

    //reverse hga
    swap( str[start],str[end]);

    return reverse(str,start+1,end-1);

}*/

void LowertoUpper(string &str,int index)
{  //for Lowercase to uppercase
   if(index==-1)
   return;

   str[index]='A'+str[index]-'a';
   LowertoUpper(str,index-1);

}

int main()
{
    //string str="MOM";
    //cout<<checkPal(str,0,2)<<endl;

    //string str="AKASH";
    //cout<<countVowels(str,4)<<endl;

    /*string str="AKASH";
    reverse(str,0,4);
    cout<<str<<endl;*/

    string str="akash";
    LowertoUpper(str,4);
    cout<<str<<endl;
}
