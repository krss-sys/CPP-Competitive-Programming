/*
 * Problem : Sumitomo Mitsui Trust Bank Programming Contest 2019 - B - Tax Rate
 * Summary : Find the pre-tax price X from post-tax price N with an 8% tax rate (floored).
 * Approach: Estimate pre-tax price X = N / 1.08, then verify if floor(X * 1.08) == N.
 * Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int X = 0; X <= N; X++) {
        if ((int)(X * 1.08) == N) {
            cout << X << endl;
            return 0;
        }
    }
    cout << ":(\n";

    return 0;
}