#include<bits/stdc++.h>
using namespace std;

long long calculateScore(vector<string>&s) {
    vector<bool>visited(26,0);
    // vector<pair<int,int>>v; //store ascii values & its index

    // for(int i=0;i<s.size();i++){
    //     v[i].first = s[i]-'0'; 
    //     v[i].second = i;
    // }
    
    long long score=0;
    for(int i=0;i<s.size();i++){

        for(int j=i;j>=0;j--){
            if(s[j]-'0' <= s[i]-'0' && j<=i){
                visited[s[i]-'0'] = 1;  //marked
                score += (j-i);
            }
        }
    }

    return score;
}


int main(){
    vector<string>s(5);
    for(int i=0;i<5;i++)
    cin>>s[i];

    cout<<calculateScore(s);

}