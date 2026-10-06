/*
 * Problem : CODE FESTIVAL 2016 qual B - B - Qualification simulator
 * Summary : Determine if participants pass based on total limit (A+B) and overseas limit (B).
 * Approach: Iterate string S, track total passed count and overseas student count.
 * Complexity: O(N)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A, B;
    int dem = 0;
    int demb = 0;
    string S;

    cin >> N >> A >> B;
    cin >> S;
    for (int i = 0; i < N; i++) {
        if (S[i] == 'a') {
            if (dem < A + B) {
                cout << "Yes\n";
                dem++;
            } else {
                cout << "No\n";
            }
        } else if (S[i] == 'b') {
            demb++;
            if (dem < A + B && demb <= B) {
                cout << "Yes\n";
                dem++;
            } else {
                cout << "No\n";
            }
        } else {
            cout << "No\n";
        }
    }

    return 0;
}