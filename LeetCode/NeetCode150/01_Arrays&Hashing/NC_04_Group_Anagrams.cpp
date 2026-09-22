#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for (string s : strs) {
            //ENG: I sort the string to create a key.
            //JPN: 文字列をソートして、キーを作ります。
            //VIE: Tôi sắp xếp chuỗi để tạo khóa (key).
            string key = s;
            std::sort(key.begin(), key.end());
            //ENG: I group strings with the same key together.
            //JPN: 同じキーの文字列をまとめます。
            //VIE: Tôi gom các chuỗi có cùng key lại với nhau.
            mp[key].push_back(s);
        }
        vector<vector<string>> ans;
        //ENG: I push all groups into the result list.
        //JPN: すべてのグループを結果に追加します。
        //VIE: Tôi thêm tất cả các nhóm vào mảng kết quả.
        for (auto pair : mp) {
            ans.push_back(pair.second);
        }
        return ans;
    }
};
