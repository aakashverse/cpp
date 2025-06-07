#include<bits/stdc++.h>
using namespace std;
//Movements allowed: 2 units or 4 units in any one direction 

int minOperations(int x, int y) {
    x=abs(x);
    y=abs(y);
        
    if(x%2!=0 || y%2!=0) //odd coordinates, not possible to reach with given rule of movement
    return -1;
        
    int stepx=0;
    if(x%4==0)
    stepx=x/4;
    else
    stepx=x/4+1;
        
    int stepy=0;
    if(y%4==0)
    stepy=y/4;
    else
    stepy=y/4+1;
        
    return stepx+stepy;
        
}


int main(){
    int x,y;
    cin>>x>>y;

    int ans = minOperations(x,y);
    cout<<"Min Moves: "<<ans<<endl;

}