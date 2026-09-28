#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty()) {
            return 0;
        }
        unordered_map<char, int> lastIndex;
        int left = 0, max_len = 0;
        for (int right = 0; right < s.length(); right++) {
            if (lastIndex.count(s[right]) && lastIndex[s[right]] >= left) {
                left = lastIndex[s[right]] + 1;
            }
            lastIndex[s[right]] = right;
            max_len = max(max_len, right - left + 1);
        }
        return max_len;
    }
};
