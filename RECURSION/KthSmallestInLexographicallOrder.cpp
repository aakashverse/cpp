#include<bits/stdc++.h>
using namespace std;

// Method-1 Recursion (Memory Limit Exceeded for high Constraints)
    void solve(int num,int n,vector<int>&result){
        if(num > n)
        return;

        result.push_back(num);

        for(int nextdigit=0;nextdigit<=9;nextdigit++){
            int nextnum = num*10 + nextdigit;

            if(nextnum > n)
            return;

            solve(nextnum,n,result);
        }
    }


    int findKthNumber(int n, int k){ 
        vector<int>result;

        for(int i=1;i<=9;i++){
            solve(i,n,result);
        }

        return result[k-1];
       
    }

// Method-2 Time Limit Exceeded 
    int result = 0;
    int count = 0;

    bool solve(long long num,int n,int k){
        if(num > n)
        return false;

       count++;

        if(count == k){
           result = num;
           return true;
        }

        for(int nextdigit=0;nextdigit<=9;nextdigit++){
            long long nextnum = num*10 + nextdigit;

            if(nextnum > n)
            return false;

           if(solve(nextnum,n,k))
           return true;
        }

        return false;
    }


    int findKthNumber(int n, int k){ 

        for(long long i=1;i<=9;i++){
            if(solve(i,n,k))
            break;
        }

        return result;
    }
    