#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

/*METHOD-1 by FUNCTION POINTERS*/
// bool myComparator(int a,int b)
// {
//     if(a<b)  // Ascending order
//     return true;

//     else 
//     return false;
// }

// bool myComparator(pair<int,int>p1,pair<int,int>p2)
// {
//     if(p1.first==p2.second)
//     return true; 

//     if(p1.first>p2.first)  // Descending order
//     return true;

//     return false;
// }

// void print(vector<pair<int,int>>&v)
// {
//     for(pair<int,int> &p:v)
//     cout<<p.first<<","<<p.second<<" :";
// }

/*METHOD-2 by FUNCTORS*/
// class myComparator{
// public:   
//     bool operator()(int a,int b){
//         return a>b;  // Ascending order
//     }

// };

/*METHOD-3 LAMBDA EXPRESSIONS*/
auto myLambda=[](int a,int b){
    return a>b;
};

void print(vector<int>&v)
{
    for(int &x:v)
    cout<<x<<" ";
}


int main()
{
    //vector<pair<int,int>>v={{2,4},{2,3},{1,7}};

    vector<int>v={5,9,2,7,1};
    sort(v.begin(),v.end(),myLambda);

    print(v);
}