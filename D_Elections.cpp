#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(ll  i = 0;i < n;i++)
int N = 10e7;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,c;
        cin>>n>>c;
        vector<pair<ll,ll>> ar;
        ll a;
        fr(i,n){
            cin>>a;
            ar.push_back(make_pair(a,i));
            
        }
        ar[0].first += c;
        sort(ar.begin(),ar.end());
        
        vector<ll> ans(n);
        
        fr(i,n-1){
            ans[ar[i].second] = 1+i;            
        }
        ans[ar[n-1].second]=0;
        fr(i,n){
            cout<<ans[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}