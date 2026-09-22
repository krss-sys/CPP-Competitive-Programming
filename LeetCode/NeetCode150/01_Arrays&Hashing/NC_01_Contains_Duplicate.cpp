#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    bool containsDuplicate(vector<int>& nums) {
        //ENG: if the array is too small, i return false.
        //JPN: 配列が少しすぎる場合は、false を返します。
        //VIE: nếu mảng quá nhỏ, tôi sẽ return false.
        if (nums.size() <= 1) {
            return false;
        }
        //ENG: I sort the array to put duplicate numbers together.
        //JPN: 同じ数字を並べるために、配列をソートします。
        //VIE: tôi sắp xếp mảng để đưa các số giống lại kế nhau
        std::sort(nums.begin(), nums.end());
        for (int i = 0; i < (int)nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                //ENG: If I find any duplicate, I return true.
                //JPN: 重複が見つかれば、trueを返します。
                //VIE: nếu có sự trùng lặp, tôi trả về true
                return true;
            }
        }
        return false;
    }
};