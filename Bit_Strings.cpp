#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()
#define MOD 1000000007

ll binpow(ll b,ll e){
    ll ans = 1;
    while(e > 0){
        if(e&1){
            ans = (ans*b)%MOD;
        }
        b = (b*b)%MOD;
        e = e>>1;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<binpow(2,n)<<endl;
    return 0;
}