/*
 * Problem : Panasonic Programming Contest 2020 - B - Bishop
 * Link    : https://atcoder.jp/contests/panasonic2020/tasks/panasonic2020_b
 * Summary : Given an H x W chessboard and a bishop starting at (1, 1).
 *           Count how many squares the bishop can reach moving diagonally.
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long H, W;
    cin >> H >> W;
    if (H == 1 || W == 1) {
        cout << 1 << "\n";
    } else {
        cout << (H * W + 1) / 2 << "\n";
    }

    return 0;
}