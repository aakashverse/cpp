#include<bits/stdc++.h>
using namespace std;

//Given an array arr of 0s and 1s. Find and return the length of the
// longest subarray with equal number of 0s and 1s.

int maxLen(vector<int>& arr) {
    unordered_map<int, int> mp;
    int maxLength = 0;
    int prefixSum = 0;

    for (int i = 0; i < arr.size(); i++) {
        // Convert 0s to -1 to use prefix sum technique
        if (arr[i] == 0) {
            prefixSum += -1;
        } else {
            prefixSum += 1;
        }

        // Check if the prefix sum is 0, which means subarray from index 0 to i has equal number of 0s and 1s
        if (prefixSum == 0) {
            maxLength = i + 1;
        }

        // If prefix sum has been seen before, it means there's a subarray with equal number of 0s and 1s
        if (mp.find(prefixSum) != mp.end()) {
            maxLength = max(maxLength, i - mp[prefixSum]);
        } else {
            mp[prefixSum] = i; //store index if its not seen
        }
    }

    return maxLength;
}

int main(){
    vector<int>arr={1,0,1,1,1,0,0};
    cout<<maxLen(arr)<<endl;
}
