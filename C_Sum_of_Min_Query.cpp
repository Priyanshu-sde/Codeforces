#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,q;
    cin>>n>>q;
    ll a[n];
    fr(i,n) cin>>a[i];
    vector<ll> b(n);
    fr(i,n) cin>>b[i];
    ll ans = 0LL;
    fr(i,n){
        ans += min(a[i],b[i]);
    }

    while(q--){
        char s;
        int x,v;
        cin>>s>>x>>v;
        if(s == 'A') {
            int pmin = min(a[x],b[x]);
            int nmin = min(pmin,v);
            ans = ans - pmin + nmin;
            cout<<ans<<endl;
            a[x] = v;
        }
        else {
            int pmin = min(a[x],b[x]);
            int nmin = min(pmin,v);
            ans = ans - pmin + nmin;
            cout<<ans<<endl;
            b[x] = v;
        }
        
    }
    return 0;
}