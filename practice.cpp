#include<iostream>
using namespace std;
int main()
{

 float D,X,Y;
	    cin>>D>>X>>Y;
	    int s=0;
	    
	    // if(X>Y)
	    // cout<<-1<<endl;
	    
	    while(X!=Y)
	    {
	        float X=40*((100-D)/100);
	        s++;
	        Y--;
            D+=5;
	    }
	    cout<<X<<endl;

}
