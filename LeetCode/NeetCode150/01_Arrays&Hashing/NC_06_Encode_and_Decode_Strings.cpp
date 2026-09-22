#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    string encode(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }
        string encode = "";
        for (const string& s : strs) {
            encode += to_string(s.size()) + "#" + s;
        }
        return encode;
    }

    vector<string> decode(string s) {
        vector<string> decode;
        int i = 0;
        int n = s.length();
        while (i < n) {
            int j = i;
            while (j < n && s[j] != '#') {
                ++j;
            }
            int len = stoi(s.substr(i, j - i));
            decode.push_back(s.substr(j + 1, len));
            i = j + 1 + len;
        }
        return decode;
    }
};
