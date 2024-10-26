#include <stdio.h>
/*You just travelled in a cab and you owe the driver 
𝑋
X dollars.
However, you only have a 
100
100 dollar bill, and the driver only has 
10
10 dollar bills with which he can pay you back.

You hand the 
100
100 dollar bill to the driver. Find the maximum amount which the driver can pay back without giving more than he owes.

Input Format
The first line of input will contain a single integer 
𝑇
T, denoting the number of test cases.
Each test case consists of a single integer 
𝑋
X, the amount you owe the driver.
Output Format
For each test case, output on a new line, the maximum amount which driver can pay back without giving more than he owes.*/



int max_payment(int X){
    int max_multiple_of10=(X/10)*10;
    return max_multiple_of10;
}
int main(void){
    int T;
    scanf("%d",&T);
    
    for(int i=0; i<T; i++){
        int X;
        scanf("%d",&X);
        printf("%d\n",max_payment(100-X));
    }
}


//Test cases
/* Test case 1: Driver pays back the remaining 
100
−
90
=
10
100−90=10 dollars in form a 
10
10 dollar bill.

Test case 2: Driver does not pay back any money since the fare is 
100
100.

Test case 3: After receiving 
100
100 dollar bill, driver owes you 
100
−
66
=
34
100−66=34 dollars. Driver gives back three 
10
10 dollars bills.*/
