#include<bits/stdc++.h>
using namespace std;

string addBinary(string& s1, string& s2) {
                    // your code here
        int n=s1.size(),m=s2.size();
        int i=n-1,j=m-1;
        int carry=0;
        string res="";
        
        while(i>=0 || j>=0 || carry){
            int sum=carry;
            
            if(i>=0) sum+=s1[i--]-'0';
            if(j>=0) sum+=s2[j--]-'0';
            
            res+=(sum%2)+'0';
            carry=sum/2;
            
        }
        
       reverse(res.begin(),res.end());
    //   string ans="";
       int count=0;
       
       for(int i=0;i<res.size();i++){
           if(res[i]!=0)
           break;
           
           else
           count++;
       }
       
      if(count==res.size()){
          return "0";
      }
       
        return res.substr(count);}


int main(){
    string s1="01001001";
    string s2="0110101";

    cout<<addBinary(s1,s2)<<endl;
} 