#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    vector<char>s(n);
	    for(int i=0;i<n;i++)
	    cin>>s[i];
	    
	    string a="RGB";
	    string b="RBG";
	    string c="BRG";
	    string d="BGR";
	    string e="GRB";
	    string f="GBR";
	    
	    int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0;

        for(int i=0;i<n;i++){
            if(a[i%3]!=s[i])
            c1++;
            
            if(b[i%3]!=s[i])
            c2++;
            
            if(c[i%3]!=s[i])
            c3++;
            
            if(d[i%3]!=s[i])
            c4++;
            
            if(e[i%3]!=s[i])
            c5++;
            
            if(f[i%3]!=s[i])
            c6++;
        }
        
        int oprn=min({c1,c2,c3,c4,c5,c6});
    
        cout<<oprn<<endl;
	
	}
	
}