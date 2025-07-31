#include <bits/stdc++.h>
using namespace std;

int f(const string& s, int l, int r) {
    int zeros = 0, ones = 0;
    for (int i = l; i <= r; ++i) {
        if (s[i] == '0') zeros++;
        else if (s[i] == '1') ones++;
    }

    // The longest non-decreasing subsequence is:
    // - take all 0s first
    // - then all 1s that come after last 0
    // So, it's: number of 0s + number of 1s after the last 0
    int maxLen = 0, count0 = 0, count1 = 0;
    for (int i = l; i <= r; ++i) {
        if (s[i] == '0') count0++;
        else count1++;
        maxLen = max(maxLen, count0 + count1);
    }
    return maxLen;
}

bool canSplit(const string& s, int k, int minScore) {
    int n = s.size();
    int cnt = 0, i = 0;
    while (i < n) {
        int j = i;
        int zeros = 0, ones = 0, maxF = 0;
        // Try to extend substring until f(T) >= minScore
        while (j < n) {
            if (s[j] == '0') zeros++;
            else ones++;
            maxF = zeros + ones;
            if (maxF >= minScore) break;
            j++;
        }
        if (j == n) break; // No more valid parts
        cnt++;
        i = j + 1; // Move to next substring
    }
    return cnt >= k;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        int left = 1, right = n;
        int ans = 1;

        while (left <= right) {
            int mid = (left + right) / 2;
            if (canSplit(s, k, mid)) {
                ans = mid;         // Valid — try for higher score
                left = mid + 1;
            } else {
                right = mid - 1;   // Invalid — try smaller
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
