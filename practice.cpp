#include<bits/stdc++.h>
using namespace std;
int main()
{

//  float D,X,Y;
// 	    cin>>D>>X>>Y;
// 	    int s=0;
	    
// 	    // if(X>Y)
// 	    // cout<<-1<<endl;
	    
// 	    while(X!=Y)
// 	    {
// 	        float X=40*((100-D)/100);
// 	        s++;
// 	        Y--;
//             D+=5;
// 	    }
// 	    cout<<X<<endl;
        
		// Removing duplicates using stl
		vector<int>v;
		v={1,2,2,3,3,4,4,4};
		auto it=unique(v.begin(),v.end());
        v.erase(it,v.end());
		for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";

}
