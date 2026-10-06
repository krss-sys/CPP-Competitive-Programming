/*
 * Problem Name: B - 1 21
 * Contest:      AtCoder Beginner Contest 086
 * URL:          https://atcoder.jp/contests/abc086/tasks/abc086_b
 * Notes:        String concatenation / Math / Square number check using sqrt()
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    string s = a + b;
    int num = stoi(s);
    int r = sqrt(num);
    if (r * r == num) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}