#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    
	    vector<int>hp(n);
	    for(int i=0;i<n;i++)
	    cin>>hp[i];
	    
	    sort(hp.begin(),hp.end());
	    
	    int ans=0;
	    for(int i=n-1;i>=0;i--){
	        hp[i]=hp[i]+x*(n-1-i);
	        ans=max(ans,hp[i]);
	    }
	    
	    cout<<ans<<endl;
	}

}
