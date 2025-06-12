#include<bits/stdc++.h>
using namespace std;

// METHOD-1 => Top down TC: O(n*m*k)
    int N;
    int M;
    int K;
    int MOD = 1e9+7;
    int t[51][51][101];

    int solve(int idx, int search_cost, int max_sofar){
        if(idx >= N){
            if(search_cost == K)
            return 1;
            
            return 0;
        }

        if(t[idx][search_cost][max_sofar] != -1){
            return t[idx][search_cost][max_sofar];
        }

        int result = 0;
        for(int num = 1;num <=M ;num++){

            if(num > max_sofar){
                result = (result + solve(idx+1,search_cost+1, num)) % MOD;
            }
            else{
                result = (result + solve(idx+1, search_cost, max_sofar)) % MOD;
            }
        }

        return t[idx][search_cost][max_sofar] = result % MOD;
    }


    int numOfArrays(int n, int m, int k) {
        N = n;
        M = m;
        K = k;
        memset(t, -1, sizeof(t));

        return solve(0, 0, 0);
    }