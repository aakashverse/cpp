#include<bits/stdc++.h>
using namespace std;
// O(N!)
    // bool isBalanced(string& str){
    //     int sumEven = 0,sumOdd = 0;
    //     for(int i=0;i<str.size();i++){
    //         if(i%2 !=0) sumOdd += str[i] - '0';
    //         else sumEven += str[i] - '0';
    //     }

    //     return sumEven == sumOdd;

    // }

    // void generatePermutations(string& s,int idx,unordered_set<string>&set){
    //     if(idx >= s.size()){
    //         set.insert(s);
    //         return;
    //     }
        
    //     for(int i=idx;i<s.size();i++){
    //         swap(s[idx],s[i]);
    //         generatePermutations(s,idx+1,set);
    //         swap(s[idx],s[i]);
    //     } 
    // }
    int solve(int remaining,int sumEven,int sumOdd,vector<int>&freq){
        if(remaining == 0)
        return (sumEven == sumOdd)? 1:0;
        
        int count = 0;
        for(int d=0;d<=9;d++){
            if(freq[d] == 0) continue; // no occurences left
            freq[d]--;

            if(remaining % 2 == 0) count += solve(remaining-1,sumEven+d,sumOdd,freq);
            else count += solve(remaining-1,sumEven,sumOdd+d,freq);
            
            freq[d]++;
        }
        
        return count;

    }
       
    int main() {
        string nums = "123";
        //unordered_set<string>set;
        //string temp = "";
        vector<int>freq(10,0);
        for(char &ch:nums) freq[ch-'0']++;
        cout<<solve(nums.size(),0,0,freq);
    
        // generatePermutations(nums,0,set);
        // int count = 0;

        // while(!set.empty()){
        //     string temp = *set.begin();
        //     if(isBalanced(temp)) 
        //     count++;
        //     set.erase(set.begin());
        // }

        // cout<<count<<endl;
    }