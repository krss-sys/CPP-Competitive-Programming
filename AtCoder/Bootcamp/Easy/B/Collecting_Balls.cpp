/*
 * Problem Name: B - Collecting Balls (Easy Version)
 * Contest:      AtCoder Beginner Contest 074
 * URL:          https://atcoder.jp/contests/abc074/tasks/abc074_b
 * Notes:        Greedy / Math / Calculate minimum distance for each ball: min(x * 2, (K - x) * 2)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int A = 0;
    int B = K;
    int x;
    int sumqd = 0;

    for (int i = 0; i < N; i++) {
        cin >> x;
        int qdA = (A + x) * 2;
        int qdB = (B - x) * 2;
        if (qdA < qdB) {
            sumqd += qdA;
        } else {
            sumqd += qdB;
        }
    }
    cout << sumqd << "\n";

    return 0;
}