#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

long long binpow(long long a,long long b){
    long long res = 1;
    while(b > 0){
        if(b & 1)
        res *= a;
        a *= a;
        b >>=1;
    }
    return res;
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    int lim = 18;
    ll pow3[19];
    ll cost[19];
    for(int i = 0;i <= lim;i++){
        pow3[i] = binpow(3,i);
        cost[i] = binpow(3,i+1) + i*binpow(3,i-1);
    }
    while(t--){
        ll n;
        cin>>n;
        ll ans = 0LL;
        for(int i = 18;i >= 0;i--){
            while (n >= pow3[i])
            {
                n -= pow3[i];
                ans += cost[i];
            }
            
        }
        cout<<ans<<endl;
    }
    return 0;
}