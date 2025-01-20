#include <bits/stdc++.h>
using namespace std;

int setbit(int num){
    return __builtin_popcount(num);
    
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    vector<int>p(n);
	    for(int i=0;i<n;i++)
	    cin>>p[i];
	   
	    bool found=0;
	    for(int i=0;i<n;i++){
	        if(setbit(i+1)!=setbit(p[i])){ // i+1 & p[i] have  same set bits then only we can sort them otherwise not
	            found=1;
	            break;
	        }
	    }
	    if(found) cout<<"NO"<<endl;
	    else cout<<"YES"<<endl;
	    
	}

}