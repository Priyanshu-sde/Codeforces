#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        ll n,k,q;
        cin>>n>>k>>q;
        ll a[n];
        ll tcnt = 0;
        multiset<ll> st;
        fr(i,n){
            cin>>a[i];
            if(a[i] <= q){
                tcnt++;
            }
            else{
                if(tcnt >= k){
                    st.insert(tcnt);
                }
                tcnt = 0;
            }
        }
        if(tcnt >= k){
            st.insert(tcnt);
        }
        ll ans = 0;
        
        for(auto it:st){
            
            ans += (it - k + 1) * (it - k + 2) / 2;
        }
        cout<<ans<<endl;

    }
    return 0;
}