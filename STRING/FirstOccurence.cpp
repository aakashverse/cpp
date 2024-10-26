#include<bits/stdc++.h>
using namespace std;

void findIndex(string &h,string &n,string &ans){
    int i=0,j=0;
    while(i<j){
        if(h[i]==n[j]){
            ans+=h[i];
            i++,j++;
        }
        else{
            i++;
            ans+='x';
        }
    }
}

int main(){
    string h="sadbutsad";
    string n="sad";
    string ans="";
    findIndex(h,n,ans);

    for(int i=0;i<ans.size();i++){
        if(ans[i]!='x')
        cout<<i<<endl;
        break;
    }
}