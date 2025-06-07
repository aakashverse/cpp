#include<bits/stdc++.h>
using namespace std;

int main(){
    // vector<string>Names = {"Tuppiey","Meow","Doggy","BrunO","oggy"};
    // find count of words that have 'O' in their name 
    
    /*auto lambda = [](char ch){
        return ch == 'O' || ch == 'o';
    };
    
    for(auto &name:Names){
        if(any_of(begin(name),end(name),lambda))
        count++;
    }*/

    vector<int>nums = {3,7,10,2,9};
    int count = 0;

    auto lambda = [](int x){
        return (x%2!=0);
    };

    for(auto &num:nums){
        if(lambda(num))
        count++;
    }

    cout<<count<<endl;
}