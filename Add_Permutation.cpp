#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        // x positions will all map to the same A-value
        int x = N - K + 1;

        vector<int> P(N+1);
        // 1) For i = 1..x, set P[i] = (x+1) - i
        //    → A[i] = P[i] + i = (x+1-i) + i = x+1 (same constant)
        for (int i = 1; i <= x; i++) {
            P[i] = x + 1 - i;
        }
        // 2) For i = x+1..N, set P[i] = i
        //    → A[i] = i + i = 2i, all distinct and ≠ (x+1)
        for (int i = x + 1; i <= N; i++) {
            P[i] = i;
        }

        // Output the permutation P[1..N]
        for (int i = 1; i <= N; i++) {
            cout << P[i] << (i==N? '\n' : ' ');
        }
    }
    return 0;
}
