#include<bits/stdc++.h>
using namespace std;

// subarray sum by contribution technique -> efficient in O(n)

 int subarraySum(vector<int>& arr) {
        // code here
        int n = arr.size();
        int sum = 0;
        
        // contrinution technique
        for(int i=0;i<n;i++)
        sum += arr[i]*(i+1)*(n-i);
        
        return sum;
    }