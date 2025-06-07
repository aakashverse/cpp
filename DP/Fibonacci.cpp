#include<bits/stdc++.h>
using namespace std;

// M-1 with Recursion
// int fibo(int n){
//     if(n<=1)
//     return n;

//     return fibo(n-1) + fibo(n-2);
// }

// M-2 with Rec + Memorization
int fibo(int n,vector<int>&dp){
    if(n<=1)
    return n;

    if(dp[n] != -1)
    return dp[n];

    return dp[n] = fibo(n-1,dp)+ fibo(n-2,dp);
}


int main(){
    int n; cin>>n;
    // vector<int>dp(n+1,-1);
    // cout<<fibo(n,dp);
    
    //M-3 Bottom Up Approach 
    // TC:O(n) with extra space of SC:O(n)
    // vector<int>dp(n+1);
    // dp[0] = 0;
    // dp[1] = 1;

    // for(int i=2;i<=n;i++){
    //     dp[i] = dp[i-1] + dp[i-2];
    // }

    // cout<<dp[n];

    // M-4 can be solved in constant space O(1)
    int a = 0, b = 1; // since answer depends on only last two states 
    int c;
    for(int i=1;i<n;i++){
        c = a + b;
        a = b;
        b = c;
    }

    cout<<c;

}