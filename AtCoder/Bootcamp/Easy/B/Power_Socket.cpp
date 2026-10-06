/*
 * Problem Name: B - Power Socket
 * Contest: Boot Camp Easy 1 / ABC139
 * URL: https://atcoder.jp/contests/abc139/tasks/abc139_b
 * Notes: Math / Greedy simulation (mỗi ổ thêm vào chỉ cho thêm A - 1 chỗ cắm mới)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    int oCamHienTai = 1;
    int dem = 0;
    cin >> a >> b;
    while (oCamHienTai < b) {
        oCamHienTai += (a - 1);
        dem++;
    }
    cout << dem << endl;

    return 0;
}