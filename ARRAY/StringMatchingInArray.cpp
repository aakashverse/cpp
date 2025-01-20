#include<bits/stdc++.h>
using namespace std;

//string::npos is a static member with a constant value of -1. npos is similar to no-position, 
//whose return value indicates no matches were found in the string. 
//Therefore, if a true value is returned, it means that the matches are found at no position.

vector<string> stringMatching(vector<string>& words) {
    int n=words.size();
    vector<string>ans;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                if(words[j].find(words[i]) !=string::npos){
                    ans.push_back(words[i]);
                    break;
                }
            }
        }
    }
    return ans;
}

int main(){
    vector<string>words={"mass","as","hero","superhero"};
    vector<string>ans=stringMatching(words);

    for(auto it:ans)
    cout<<"["<<it<<"]"<<" ";

}
