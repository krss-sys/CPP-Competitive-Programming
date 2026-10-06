/*
 * Problem : ABC156_C - Rally
 * Summary : Find integer point P (1..100) to min total stamina: sum((X[i] - P)^2)
 * Approach: Brute force P from 1 to 100 and keep the minimum stamina.
 * Complexity: O(100 * N)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> X(N);
    for (int i = 0; i < N; i++) {
        cin >> X[i];
    }

    int min_ans = 1000000;
    for (int p = 1; p <= 100; p++) {
        int stamina = 0;
        for (int i = 0; i < N; i++) {
            stamina += (X[i] - p) * (X[i] - p);
        }
        if (stamina < min_ans) {
            min_ans = stamina;
        }
    }
    cout << min_ans << endl;

    return 0;
}