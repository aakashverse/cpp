#include<bits/stdc++.h>
using namespace std;

// m-->row, n-->col
// gives Memory limit exceeded
vector<int>kthSmallest(int m, int n, int k,vector<vector<int>>&matrix,vector<int>&v) {
    // code here
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            matrix[i][j] = (i+1)*(j+1);
        }
    }
   
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            v.push_back(matrix[i][j]);
        }
    }
    
}


int main(){
    int n,m,k;
    cin>>n>>m>>k;
    
    vector<vector<int>>matrix(m,vector<int>(n,0));
    vector<int>v;
    kthSmallest(m,n,k,matrix,v);

    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";

}