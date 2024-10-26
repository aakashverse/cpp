#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<string,pair<int,string>>p;

    p=make_pair("AKASH",make_pair(1,"Yadav"));
    
    // p.first="AKASH";
    // p.second.first=1;
    // p.second.second="Yadav";

    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
}