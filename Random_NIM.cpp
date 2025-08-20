#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
const int MAXA = 1000;

long long modpow(long long a, long long e) {
    long long r = 1 % MOD;
    a %= MOD;
    while (e) {
        if (e & 1) r = (r * a) % MOD;
        a = (a * a) % MOD;
        e >>= 1;
    }
    return r;
}
long long inv(long long a) { return modpow(a, MOD - 2); }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // Precompute f[x] for x up to MAXA:
    static int f[MAXA + 1];
    static int pref[MAXA + 1]; // S[x] = sum_{k=0..x} f[k]
    f = 0;
    pref = 0;
    for (int x = 1; x <= MAXA; ++x) {
        long long invx = inv(x);
        long long Sprev = pref[x - 1];
        long long fx = (1 - (Sprev * invx) % MOD + MOD) % MOD;
        f[x] = (int)fx;
        pref[x] = (pref[x - 1] + f[x]) % MOD;
    }
    
    int T; 
    if (!(cin >> T)) return 0;
    while (T--) {
        int N; 
        cin >> N;
        long long prod = 1;
        for (int i = 0; i < N; ++i) {
            int a; cin >> a;
            int pi = f[a];                 // p_i = probability pile's lifetime parity is odd
            long long term = (1 - (2LL * pi) % MOD + MOD) % MOD; // (1 - 2p_i) mod
            prod = (prod * term) % MOD;
        }
        // P_odd = (1 - prod) / 2 mod MOD
        long long ans = (1 - prod + MOD) % MOD;
        ans = (ans * inv(2)) % MOD;
        cout << ans << '\n';
    }
    return 0;
}
