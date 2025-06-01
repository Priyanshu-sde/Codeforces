#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int main(){
    int n;
    cin>>n;
    ll a[n];
    ll ma = 0,mi = INT_MAX;
    fr(i,n) {
        cin>>a[i];
        ma = max(ma,a[i]);
        mi = min(mi,a[i]);
    }
    ll macnt = 0,micnt = 0;
    fr(i,n){
        if(a[i] == ma)macnt++;
        if(a[i] == mi)micnt++;
    }
    ll ans = micnt*macnt;
    if(ma == mi) {
        ans = macnt*(micnt-1)/2;
    }
    cout<<ma-mi<<" "<<ans<<endl;
    

    return 0;
}