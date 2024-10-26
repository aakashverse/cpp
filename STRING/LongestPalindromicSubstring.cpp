#include <iostream>
#include <string>
using namespace std;
// leetcode-5  T.C=O(N^2)

string ExpandAroundCenter(const string& s, int start, int end) {
    while (start >= 0 && end < s.length() && s[start] == s[end]) {
        start--;
        end++;
    }
    // Return the palindrome found by expanding from the center
    return s.substr(start+1,end-start-1);
}

string longestPalindrome(string s){
    if (s.empty()) return "";
    string longest = s.substr(0, 1); // Start with the first character

    for (int i = 0; i < s.length() - 1; i++) {
        string s1 = ExpandAroundCenter(s, i, i); // Odd-length palindromes
        if (s1.length() > longest.length()) longest = s1;

        string s2 = ExpandAroundCenter(s, i, i + 1); // Even-length palindromes
        if (s2.length() > longest.length()) longest = s2;
    }
    return longest;
}

int main() {
    string s = "babad";
    cout<<"LPS is: "<<longestPalindrome(s)<<endl;
    return 0;
}
