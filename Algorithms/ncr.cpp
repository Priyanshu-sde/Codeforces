#include<bits/stdc++.h>
using namespace std;

#define int long long
int mod = 1e9 + 7;

int binpow(int a, int b) {
	if(b == 0) return 1;
	if(b % 2 == 1) return (a * binpow(a, b-1)) % mod;
	else {
		int x = binpow(a, b/2);
		return (x * x) % mod;
	}
}

int inverse(int x) {    // O(log(mod))
	return binpow(x, mod-2);
}

int fact[1000100];
int invfact[1000100];
int precompute_for_faster() {    // O(n) + O(log(mod)) + O(n) ~ O(n + log(mod))
	fact[0] = 1;
	for(int i=0; i<=1000000; i++) {
		fact[i] = (fact[i-1] * i) % mod;
	}
	invfact[1000000] = inverse(fact[1000000]);
	for(int i=1000000; i>=1; i--) {
		invfact[i-1] = (invfact[i] * i) % mod;
	}
}

int ncr_fact_faster(int n, int r) {    // O(1)
	int num = fact[n];
	int den = (invfact[n-r] * invfact[r]) % mod;
	return (num * den) % mod;    // den is already inverted
}

signed main() {
	precompute_for_faster();
	int q;
	cin >> q;

	while(q--) {
		int n, r;
		cin >> n >> r;
		cout << ncr_fact_faster(n, r) << '\n';
	}
	
	return 0;
}
