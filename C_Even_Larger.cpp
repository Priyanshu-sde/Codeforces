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
        vector<ll> a(n);
        fr(i,n) cin>>a[i];
        ll ans = 0LL;
        for(int i =0; i < n -1;i+= 2){
            if(i == n - 2){
                ans += max(0LL,(ll)(a[i] - a[i+1]));
            }
            else if(a[i] + a[i+2] > a[i+1]){
                ans += a[i+2] - max(0LL,(ll)(a[i+1] - a[i]));
                a[i+2] = max(0LL,(ll)(a[i+1] - a[i]));
                if(a[i] > a[i+1]){
                    ans += a[i] - a[i+1];
                    a[i] = a[i+1];
                }
            }
        }
        cout<<ans<<endl;


    }
    return 0;
}