#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //ENG: I loop through the array.
        //JPN: 配列をループします。
        //VIE: Tôi duyệt qua mảng.
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                //ENG: If the sum equals target, I return their indexes.
                //JPN: 合計がtargetと同じなら、インデックスを返します。
                //VIE: Nếu tổng bằng target, tôi trả về vị trí của chúng.
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        //ENG: If no pair is found, I return empty.
        //JPN: 見つからなければ、空の配列を返します。
        //VIE: Nếu không tìm thấy, tôi trả về mảng rỗng.
        return {};
    }
};
