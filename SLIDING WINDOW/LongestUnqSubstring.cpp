#include <bits/stdc++.h>
using namespace std;

int longestUniqueSubstr(string &s) {
    int n = s.length();
    int i = 0, j = 0; // using two pointers technique
    int maxLength = 0; // to store the length of the longest unique substring
    
    unordered_map<char, int> mp; // to store the count of characters

    while (j < n) {
        mp[s[j]]++; // increment the count of the character at j
        while (mp[s[j]] > 1) { // if there's a duplicate character
            mp[s[i]]--; // remove the character at i
            i++;
        }
        maxLength = max(maxLength, j - i + 1); // update the maximum length
        j++;
    }

    return maxLength;
}

int main() {
    string str = "geeksforgeeks";
    cout << "The length of the longest unique substring is: " << longestUniqueSubstr(str) << endl;
    return 0;
}
