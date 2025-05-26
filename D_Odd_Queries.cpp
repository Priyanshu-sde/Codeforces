#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(ll  i = 2;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
#define all(a) a.begin(),a.end()

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        ll n,q,an;
        cin>>n>>q;
        ll a[n+1];
        a[0] = 0;
        cin>>a[1];
        fr(i,n+1) {
            cin>>an;
            a[i] = a[i-1] + an;
        }
        
        while(q--){
            ll l,r,k;
            cin>>l>>r>>k;
            if((a[n] - (a[r] - a[l-1]) + k*(r-l))&1){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;

        }
    }
    return 0;
}