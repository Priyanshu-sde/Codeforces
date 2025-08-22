#include <bits/stdc++.h>
using namespace std;
using ll = long long;

static inline ll calsum(ll n) {
    if (n < 0) return 0;
    ll res = 0;
    for (ll p = 1; p <= n; p *= 10) {
        ll divider = p * 10;
        ll higher = n / divider;
        ll curr = (n / p) % 10;
        ll lower = n % p;
        res += higher * 45 * p;
        res += (curr * (curr - 1) / 2) * p;
        res += curr * (lower + 1);
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll pow10[17];
    pow10[0] = 1;
    for (int i = 1; i <= 16; i++) pow10[i] = pow10[i - 1] * 10;
    ll digit[17] = {0}; 
    ll sum[17] = {0};   
    for (int d = 1; d <= 16; d++) {
        ll cnt = 9 * pow10[d - 1];        
        digit[d] = d * cnt;
        ll hi = pow10[d] - 1;
        ll lo = pow10[d - 1] - 1;
        sum[d] = calsum(hi) - calsum(lo);
    }

    int t;
    cin >> t;
    while (t--) {
        long long k;
        cin >> k;
        ll ans = 0;
        ll rem = k;

        for (int d = 1; d <= 16; d++) {
            if (rem == 0) break;
            if (rem >= digit[d]) {
                ans += sum[d];
                rem -= digit[d];
            } else {
                ll cnt = 9 * pow10[d - 1];
                ll q = rem / d;     
                ll r = rem % d;     
                ll A = pow10[d - 1];

                if (q > 0) {
                    ll B = A + q - 1;
                    ans += calsum(B) - calsum(A - 1);
                }
                if (r > 0) {
                    ll x = A + q; 
                    string s = to_string(x);
                    for (int i = 0; i < r; i++) ans += (s[i] - '0');
                }
                rem = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}