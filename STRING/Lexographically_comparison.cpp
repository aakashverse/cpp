#include<bits/stdc++.h>
using namespace std;

//Lexographical comparison are the comparison on the basis of occurence of characters in dictionaries
int main(){
    string s="aaaa";
    string t="aaaA";
     
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    transform(t.begin(),t.end(),t.begin(), ::tolower);
    
    if(s==t) cout<<0<<endl;
    
    else if(s<t) cout<<-1<<endl;
    
    else cout<<1<<endl;
}