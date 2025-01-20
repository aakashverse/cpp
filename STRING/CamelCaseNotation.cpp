#include<bits/stdc++.h>
using namespace std;

//Example: "GeeksForGeeks" matches the pattern "GFG",because if 
//we combine all the capital letters in "GeeksForGeeks" they become "GFG".
//Also note "GeeksForGeeks" matches with the pattern "GFG" and also "GF", 
//but does not match with "FG".

vector<string> camelCase(vector<string> &arr, string &pat) {
    // code here
    int n=arr.size();
    int m=pat.size();
    vector<string>cc(n);
        
    for(int i=0;i<n;i++){
        for(int j=0;j<arr[i].size();j++){
            if(isupper(arr[i][j]))
            cc[i]+=arr[i][j];
        }
    }
    
    vector<string>ans;

    for(int i=0;i<n;i++){
        if(cc[i].find(pat)!= string::npos && cc[i].find(pat)==0)
        ans.push_back(arr[i]);
    }
        
    return ans;
}

int main(){
    vector<string>arr={"Hi", "Hello", "HelloWorld", "HiTech", "HiGeek", "HiTechWorld", "HiTechCity", "HiTechLab"};
    //vector<string>arr={"WelcomeGeek", "WelcomeToGeeksForGeeks", "GeeksForGeeks"};
    string pat="HT";
     
    vector<string>res=camelCase(arr,pat);

    cout<<"The words matches with pat are: "<<endl;
    for(string &str:res)
    cout<<str<<" "<<endl;

}