#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        unordered_set<int> seen(nums.begin(), nums.end());
        int best = 0;
        for (const int& x : seen) {
            if (seen.find(x - 1) == seen.end()) {
                int y = x;
                int count = 0;
                while (seen.find(y) != seen.end()) {
                    count++;
                    y++;
                }
                best = max(best, count);
            }
        }
        return best;
    }
};
