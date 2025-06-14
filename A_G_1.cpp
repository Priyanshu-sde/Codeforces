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
    fr(i,n) cin>>a[i];
    int k;
    cin>>k;
    int ans = 0;
    fr(i,n){
        if(a[i] >= k) ans++;
    }
    cout<<ans<<endl;
    return 0;
}