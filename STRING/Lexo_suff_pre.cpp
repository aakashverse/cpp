#include<bits/stdc++.h>
using namespace std;

bool myComparator(string a,string b){
    if(a.size()<=b.size() && b.substr(0,a.size())==a)
    return false;

    else if(a.size()>=b.size() && a.substr(0,b.size())==b)
    return true;

    else
    return a<b;

};

int main(){
    // int n;
    // cin>>n;

    // while(n--){
        vector<string>s={"bat","apple","batman"};
        // for(int i=0;i<s.size();i++)
        // cin>>s[i];

        sort(s.begin(),s.end(),myComparator);

        for(string str:s)
        cout<<str<<endl;
        
    //}
}