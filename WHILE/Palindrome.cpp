#include<iostream>
#include<math.h>
using namespace std;
 bool isPalindrome(int x) {
       
        if(x<0)
        cout<<0;
        
         int rem,num=x,ans=0;
        
        while(num!=0){
            rem=num%10;
            num=num/10;
            if(ans>INT_MAX/10)
                cout<<"false";
                
            ans=ans*10+rem;
        }
        if(ans==x)
            cout<<"true";
        else 
            cout<<"false";
        }