#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //ENG: I create a map for fast lookup.
        //JPN: 検索を速くするために、マップを作ります。
        //VIE: Tôi tạo một map để tìm kiếm cho nhanh.
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            //ENG: If I find the needed number, I return both indexes.
            //JPN: 必要な数字が見つかれば、両方のインデックスを返します。
            //VIE: Nếu tìm thấy số cần thiết, tôi trả về cả hai vị trí.
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }
            //ENG: Otherwise, I save the current number into the map.
            //JPN: そうでなければ、今の数字をマップに保存します。
            //VIE: Nếu không, tôi lưu số hiện tại vào map.
            mp[nums[i]] = i;
        }
        return {};
    }
};
