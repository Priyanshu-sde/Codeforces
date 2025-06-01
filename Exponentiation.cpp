#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll binpow(ll a,ll b,ll MOD){
    ll result = 1;
    a = a%MOD;
    if(a == 0 && b > 0) return 0;
    while(b > 0){
        if(b&1){
            result = (result*a)%MOD;
        }
        b = b>>1;
        a = (a * a) % MOD;
    }
    return result;
}

int main () {
    int t;
    cin>>t;
    while(t--){
    ll a,b,c,MOD;
    cin>>a>>b>>c>>MOD;
    ll po = binpow(b,c,1);
    cout<<binpow(a,po,MOD)<<endl;
    }
    
}