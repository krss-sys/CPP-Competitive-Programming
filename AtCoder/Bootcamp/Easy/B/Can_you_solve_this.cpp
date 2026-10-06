/*
 * Problem : AtCoder Beginner Contest 121 - B: Can you solve this?
 * Link    : https://atcoder.jp/contests/abc121/tasks/abc121_b
 * Summary : Count how many out of N source codes satisfy:
 *           sum(A_i,j * B_j) + C > 0
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, C;
    cin >> N >> M >> C;
    vector<int> B(M);
    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }
    int dem = 0;
    for (int i = 0; i < N; i++) {
        int sum = C;
        for (int j = 0; j < M; j++) {
            int A;
            cin >> A;
            sum += A * B[j];
        }
        if (sum > 0) {
            dem++;
        }
    }
    cout << dem << "\n";

    return 0;
}