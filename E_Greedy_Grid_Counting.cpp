#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
const int MAXN = 505; // Up to 500 for n and k
const int MAXK = 505;

// n, k, dp are global as requested
int n, k;
// We use n <= 500, sum can drop to -k at each step => sum index shift by k
int dp[MAXN][2 * MAXK][2]; 
vector<int> a, b;

// offset to handle negative indices in dp
int K_shift;

// Recursive DP: 
// idx: which c_i (from 0 to n-2), c_i = a[idx+1] - b[idx]
// sum: sum since most recent negative c_i (range: [-k*n, k*n]; but at worst [-k, k])
// first: are we in the "all non-negative" prefix phase (1=yes, 0=no)
int rec(int idx, int sum, int first) {
    int dp_idx = sum + K_shift;
    if(idx == n - 1) return 1;  // Finished all c_i

    int &ans = dp[idx][dp_idx][first];
    if(ans != -1) return ans;
    ans = 0;

    // Determine values for a[idx+1] and b[idx]
    for(int aa = (a[idx+1] == -1 ? 1 : a[idx+1]); aa <= (a[idx+1] == -1 ? k : a[idx+1]); ++aa) {
        for(int bb = (b[idx] == -1 ? 1 : b[idx]); bb <= (b[idx] == -1 ? k : b[idx]); ++bb) {
            int c = aa - bb;
            if(first) {
                if(c >= 0) {
                    ans = (ans + rec(idx+1, sum+c, 1)) % MOD;
                } else {
                    ans = (ans + rec(idx+1, c, 0)) % MOD;
                }
            } else {
                if(sum + c <= 0) {
                    if(c < 0) { // reset cumulative sum
                        ans = (ans + rec(idx+1, c, 0)) % MOD;
                    } else {
                        ans = (ans + rec(idx+1, sum + c, 0)) % MOD;
                    }
                }
                // else, sum + c > 0: not allowed after initial prefix
            }
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        // a and b are 0-based, a[0..n-1], b[0..n-1]
        a.resize(n);
        b.resize(n);
        for(int i=0; i<n; ++i) cin >> a[i];
        for(int i=0; i<n; ++i) cin >> b[i];
        // Max sum shift: for safest, use k for -k..k
        K_shift = k;
        memset(dp, -1, sizeof(dp));
        cout << rec(0, 0, 1) << '\n';
    }
    return 0;
}
