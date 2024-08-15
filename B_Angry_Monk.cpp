#include<bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD = 10e7;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> a(k);
        ll ma = 0LL,sum = 0LL;
        for(ll i = 0 ;i < k;i++){
            cin>>a[i];
            ma= max(ma,a[i]);
            sum += a[i];
        }
        ll ans = (sum - ma - k + 1) + sum - ma;
        cout<<ans<<endl;


    }

}