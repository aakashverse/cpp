#include<bits/stdc++.h>
using namespace std;

    int power(int n,int x,int m){
        long long res = 1;

        for(int i=0;i<n;i++){
            res *= x; 
            if(res > m) return 2; // exceeds m
        }

        if(res == m) return 1; // exactly m
        return 0; // otherwise        

    }

    int NthRoot(int N,int M){ 
        int l = 1;
        int h = M;
        
        while(l<=h){
            int mid = l+(h-l)/2;
            int val = power(N,mid,M);
            
            if(val == 1){
               return mid;
            }
            else if(val == 0){
                l = mid + 1;
            } 
            else
                h = mid - 1;
        }
        return -1;
    }

    int main(){
        int N,M; cin>>N>>M;
        int result = NthRoot(N,M);

        cout<<result<<endl;
    }