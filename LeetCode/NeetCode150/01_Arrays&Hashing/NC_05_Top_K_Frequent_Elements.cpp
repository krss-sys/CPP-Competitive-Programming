#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //ENG: First, I count the frequency of each number.
        //JPN: まず、各数字の出現回数を数えます。
        //VIE: Đầu tiên, tôi đếm số lần xuất hiện của từng số.
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }

        vector<vector<int>> freq(nums.size() + 1);
        for (auto pair : count) {
            int num = pair.first;
            int times = pair.second;
            //ENG: I group numbers by their frequencies.
            //JPN: 数字を出現回数ごとにグループ化します。
            //VIE: Tôi nhóm các số theo tần suất của chúng.
            freq[times].push_back(num);
        }

        vector<int> res;
        //ENG: I collect the most frequent numbers until I have k items.
        //JPN: k個になるまで、最も頻度の高い数字を集めます。
        //VIE: Tôi gom các số xuất hiện nhiều nhất cho đến khi đủ k phần tử.
        for (int i = freq.size() -1; i >= 0; i--) {
            for (int num : freq[i]) {
                res.push_back(num);
                if (res.size() == k) {
                    return res;
                }
            }
        }
        return res;
    }
};
