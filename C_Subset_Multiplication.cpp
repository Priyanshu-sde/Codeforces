#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()


ll lcm (ll a, ll b){
    return (a/__gcd(a,b))*b;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n];
        fr(i,n)cin>>a[i];
        set<ll> st;
        for(int i  = n-1; i > 0;i--){
            st.insert(a[i-1]/(__gcd(a[i],a[i-1])));
            a[i-1] = __gcd(a[i],a[i-1]);
        }
        ll ans = 1;
        for(auto it : st){
            ans = lcm(ans,it);
        }
        cout<<ans<<endl;


    }
    return 0;
}