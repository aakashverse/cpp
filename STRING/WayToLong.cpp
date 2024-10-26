#include<iostream>                      /*AABREVIATION MAKER PROBLEM*/
using namespace std;
int main()
{ //The problem is about abbreviation of long words which are tiresome on writing like the word "internationalization"..hence its abbreviation is i18n i.e. first & last word in between the remaining number of letters
    int n;
    cin>>n;
    //Here n is number of lines with a single word on each line
    while(n)
    {
        string s;
        cin>>s;

        if(s.length()>10)
        {
            cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
        }

        else
        {
            cout<<s<<endl;
        }
    }
}