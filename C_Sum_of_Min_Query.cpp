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
        ll x,v;
        cin>>s>>x>>v;
        x--;
        if(s == 'A') {
            int diff = min(a[x],b[x]);
            a[x] = v;
            diff -= min(a[x],b[x]);  
            ans -= diff;              
            cout<<ans<<endl;
        }
        else {
            int diff = min(a[x],b[x]);
            b[x] = v;
            diff -= min(a[x],b[x]);  
            ans -= diff;          
            cout<<ans<<endl;
            
        }
        
    }
    return 0;
}