#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    vector<int>a(n);
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	   
	    for(int i=0;i<n;i++){
	        bool happy=true;
	          
	        for(int j=0;j<i;j++){ 
	            if(a[j]>=a[i]){
	              happy=false;
	              break;
	            }
	           
	        }
	       
	        cout<<happy<<" ";
	        
	    }
	       cout<<endl; 
	}

}
