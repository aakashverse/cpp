#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    string a,b;
	    cin>>a>>b;
	    
	    int totalone=0,extraone=0;
	    for(int i=0;i<n;i++){
	        if(a[i]=='1' || b[i]=='1')
	        totalone++;
	        
	        if((a[i]=='0' && b[i]=='1') || (a[i]=='1' && b[i]=='0') )
	        extraone++;
	    }
	    
	    //int total1=onea+oneb;
	    
	    if(totalone%2==1 || extraone>=1) 
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	        
	}

}
