#include<bits/stdc++.h>
using namespace std;

int mod = 1e9+7; // to avoid TLE 
class Solution {
public:
    long long findPower(long long a,long long b){ // O(log(b))
        if(b == 0)
        return 1;

        long long half   = findPower(a,b/2);
        long long result = (half * half)% mod;

        if(b%2 == 1)
        result = (result * a)% mod;

        return result;

    }

    long long nCr(int n,int r,vector<long long>&factorial,vector<long long>&FermatFactorial){
        // nCr = (n!) * ((n-r)^-1)! * ((r)^-1)!
        return factorial[n] * FermatFactorial[n-r]% mod * FermatFactorial[r]% mod; // O(1) due to precomputation
    }


    int countGoodArrays(int n, int m, int k) {
        // precompute factorial
        vector<long long>factorial(n+1,1); 
        factorial[0] = 1;
        factorial[1] = 1;
        for(int i=2;i<=n;i++){
            factorial[i] = (factorial[i-1]*i )% mod;
        }

        // precompute Inverse factorial by Fermat's little theorem
        vector<long long>fermatFactorial(n+1,1);
        for(int i=0;i<=n;i++){
            fermatFactorial[i] = findPower(factorial[i],mod-2);
        }

        long long result = nCr(n-1,k,factorial,fermatFactorial); // n-1Ck

        result = (result * m)% mod;

        result = (result * findPower(m-1,n-k-1))% mod; // O(log(n-k-1))

        return result;
        // Overall TC: O(n)
    }
};