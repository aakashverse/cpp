#include<iostream>
#include<cmath>
using namespace std;
 int reverse(int x) {
        int ld, sum=0;
        while(x!=0){
            ld=x%10;
             x=x/10;
             if(sum>INT_MAX/10 || sum<INT_MIN/10)
                 return 0;
            sum=sum*10+ld;
           
        }
       
          return sum;
       
    }