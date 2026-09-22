#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        //ENG: If their lengths are different, I return false.
        //JPN: 長さが違う場合は、falseを返します。
        //VIE: nếu độ dài 2 chuỗi khác nhau, t return false.
        if (s.size() != t.size()) {
            return false;
        } else {
            //ENG: I use an array to count letter frequencies.
            //JPN: 配列を使って、文字の数を数えます。
            //VIE: Tôi dùng một mảng để đếm số lượng ký tự.
            int count[26] = {0};
            for (int i = 0; i < s.size(); i++) {
                count[s[i] - 'a']++;
                count[t[i] - 'a']--;
            }

            for (int i = 0; i < 26; i++) {
                //ENG: If any count is not zero, I return false.
                //JPN: カウントが0でなければ、falseを返します。
                //VIE: Nếu đếm không bằng 0, tôi trả về false.
                if (count[i] != 0) {
                    return false;
                }
            }
            return true;
        }
    }
};