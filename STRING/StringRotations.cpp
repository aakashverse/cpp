#include<bits/stdc++.h>
using namespace std;

bool areRotations(string &s1, string &s2) {
        // Your code here
        int n=s1.length();
        int m=s2.length();
        
        string temp=s1+s1; //concatinate string s1 with itself
        
        if(temp.find(s2) != string::npos) //finding s2 as substring in temp 
        return true;
        
        return false;

    }

int main(){
    string s1="abcd";
    string s2="cadb";

    cout<<areRotations(s1,s2)<<endl;

}