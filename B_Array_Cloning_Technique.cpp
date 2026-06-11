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
    int t = 1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<ll,int> mp;
        int ans = 0;
        vector<ll> a(n);
        int ma = 0;
        fr(i,n) {
            cin>>a[i];
            mp[a[i]]++;
            ma = max(ma,mp[a[i]]);
        }
        while(ma < n){
            ans += min(ma,n-ma);
            ma *= 2;
            ans++;
        }
        cout<<ans<<endl;
        
        
    }
    return 0;
}