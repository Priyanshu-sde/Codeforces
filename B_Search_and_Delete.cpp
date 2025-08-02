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
    int n,m;
    cin>>n>>m;
    ll a[n];
    fr(i,n) cin>>a[i];
    vector<ll> b(m);
    fr(i,m) cin>>b[i];
    map<int,int> cnt;
    fr(i,n){
        cnt[a[i]]++;
    }
    fr(i,m){
        if(cnt[b[i]] > 0){
            cnt[b[i]]--;
        }
    }
    for(auto it: cnt){
        for(int i = 1;i <= it.second;i++)
        cout<<it.first<<" ";
    }
    cout<<endl;

    
    return 0;
}