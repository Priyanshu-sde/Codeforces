#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()
const ll MOD = 1000000007;

ll fact[100010];
ll invfact[100010];

ll binpow(ll b, ll e){
   ll ans = 1;
   while(e > 0){
    if(e&1){
        ans = (ans*b) % MOD;
    }
    e = e >>1;
    b = (b*b)%MOD;
   } 
   return ans;
}

void precompute_fact(){
    fact[0] = 1;
    for(int i = 1;i <= 100000;i++){
        fact[i] = (i*fact[i-1])%MOD;
    }
    invfact[100000] = binpow(fact[100000],MOD - 2);
    for(int i = 100000;i > 0;i--){
        invfact[i-1] = (invfact[i]*i) % MOD;
    }
}

ll ncr(int a,int b){
    return (fact[a]*((invfact[b]*invfact[a-b])%MOD))%MOD;
}


int main(){
    precompute_fact();
    int t = 1;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<ncr(a,b)<<endl;
    }
    return 0;
}