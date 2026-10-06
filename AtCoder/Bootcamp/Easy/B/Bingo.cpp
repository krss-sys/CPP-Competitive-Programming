/*
 * Problem Name: B - Bingo
 * Contest:      AtCoder Beginner Contest 157
 * URL:          https://atcoder.jp/contests/abc157/tasks/abc157_b
 * Notes:        2D Array / Grid simulation / Check rows, cols, diagonals
 */


#include <bits/stdc++.h>
using namespace std;

int main() {
    bool marked[3][3] = {false};
    int A[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }
    int N;
    cin >> N;
    for (int k = 0; k < N; k++) {
        int b;
        cin >> b;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (A[i][j] == b) {
                    marked[i][j] = true;
                }
            }
        }
    }
    bool bingo = false;
    for (int i = 0; i < 3; i++) {
        if (marked[i][0] && marked[i][1] && marked[i][2]) {
            bingo = true;
        }

        if (marked[0][i] && marked[1][i] && marked[2][i]) {
            bingo = true;
        }
    }

    if (marked[0][0] && marked[1][1] && marked[2][2]) {
        bingo = true;
    }
    if (marked[0][2] && marked[1][1] && marked[2][0]) {
        bingo = true;
    }

    if (bingo) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}