#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

#define debug(x) cerr << #x << " = " << x << endl;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin>>t;
    while(t--){
        ll n,x,y;
        cin>>n>>x>>y;
        vector<ll> a(n);
        fr(i,n) cin>>a[i];
        ll ans = 0LL;
        map<ll,int> mp;
        map<ll,int> mpp;

        fr(i,n){
            ans += min(mp[x - a[i]%x],mpp[a[i]%y]);
            debug(ans);
            mp[a[i]%x]++;
            mpp[a[i]%y]++;
        }
        cout<<ans<<endl;
        
    }
    return 0;
}