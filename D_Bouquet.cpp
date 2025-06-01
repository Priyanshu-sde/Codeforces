#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()
#define MOD 1000000007

ll binpow(ll a,ll b){
    ll res = 1;
    while(b > 0){
        if(b&1){
            res = (res*a)%MOD;
        }
        a = (a*a)%MOD;
        b >>= 1;
    }
    return res;
}


ll comb(ll n,ll r){
    ll res = 1;
    for(int i = 1;i <= r;++i){
        res =( res*(n -r + 1))%MOD;
    }
    return res;
}

int main(){
    ll n,a,b;
    cin>>n>>a>>b;
    ll pw = binpow(2,n) - 1;
    cout<<pw<<endl;
    pw -= comb(n,a);
    cout<<pw<<endl;
    pw -= comb(n,b);
    cout<<comb(n,b)<<endl;
    cout<<pw<<endl;
    return 0;
}