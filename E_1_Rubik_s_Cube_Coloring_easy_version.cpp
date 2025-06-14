#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()
#define MOD 1000000007

ll binpow(ll b, ll e){
    ll ans = 1;
    while(e > 0){
        if(e&1) ans = (ans*b) %  MOD;
        b = (b*b)%MOD;
        e >>= 1;
    }
    return ans;
}

ll binpow1(ll b, ll e){
    ll ans = 1;
    while(e > 0){
        if(e&1) ans = (ans*b) %  (MOD-1);
        b = (b*b)%(MOD-1);
        e >>= 1;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<(6LL* binpow(4LL,binpow1(2LL,n) - 2LL) )%MOD<<"\n";
    return 0;
}