#include <iostream>
#include <vector>
using namespace std;

//Given a binary array arr[] (containing only 0s and 1s) and an integer k, you are allowed to flip at most k 0s to 1s. 
//Find the maximum number of consecutive 1's that can be obtained in the array after performing the operation at most k times.

int maxOnes(vector<int> &arr, int k) {
    int res = 0;

    // Start and end pointer of the window 
    int start = 0, end = 0; 
    
    // Counter to keep track of zeros in current window
    int cnt = 0;
    
    while (end < arr.size()) {
        if (arr[end] == 0)
            cnt++;
        
        // Shrink the window from left if number of 
        // zeroes are greater than k
        while (cnt > k) {
            if (arr[start] == 0)
                cnt--;
                
            start++;
        }
        
        res = max(res, (end - start + 1));
        
        // Increment end pointer to expand the window
        end++; 
    }
    
    return res; 
}

int main() {
    vector<int> arr = {1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1}; 
    int k = 2;
    cout << maxOnes(arr, k);
    return 0;
}