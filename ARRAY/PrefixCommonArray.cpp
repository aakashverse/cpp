#include<bits/stdc++.h>
using namespace std;

//thought Process-har element ki freq 2 hogi since A & B are permutations of each other(no repetition)

 vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
    int n=A.size();

    unordered_map<int,int>mp;
    vector<int>res(n);

    int count=0;

    for(int i=0;i<n;i++){
        mp[A[i]]++;
        if(mp[A[i]]==2) //one element in A & the second one is in B i.e. common till index i
        count++;

        mp[B[i]]++;
        if(mp[B[i]]==2)
        count++;

        res[i]=count;
    }

    return res;
}

int main(){
    vector<int>A={1,3,2,4};
    vector<int>B={3,1,2,4};
    vector<int>ans=findThePrefixCommonArray(A,B);

    for(int x:ans)
    cout<<x<<" ";

}