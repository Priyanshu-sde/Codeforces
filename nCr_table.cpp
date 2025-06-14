#include<bits/stdc++.h>
using namespace std;
#define ll long long

#define mod 1000000007

ll binpow(ll a, ll b) {
	if(b == 0) return 1;
	
	if(b % 2 == 1) return (a * binpow(a, b-1)) % mod;
	else {
		ll x = binpow(a, b/2);
		return (x * x) % mod;
	}
}

ll inverse(ll x) {
	return binpow(x, mod-2);
}

ll single_ncr(ll n, ll r) {  
	ll num = 1, den = 1;
	for(int i=1; i<=r; i++) {
		num = (num * (n-i+1)) % mod;
		den = (den * i) % mod;
	}
	return (num * inverse(den)) % mod;
}

int main () {
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ans = single_ncr(n,4);
        cout<<ans<<endl;
    }
}