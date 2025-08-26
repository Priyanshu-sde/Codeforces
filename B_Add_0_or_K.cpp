#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

ll power(ll a, ll b, ll mod){
    ll res = 1;
    while(b > 0){
        if(b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        fr(i,n) cin>>a[i];
        if(k&1){
            fr(i,n){
                if(a[i]&1) a[i] += k;
            }
            fr(i,n){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else{
            vector<int> prime = {3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59};
            int p = -1;
            for(int q:prime){
                if(k%q != 0){
                    p = q;
                    break;
                }
            }
            // int p = 3;
            // while(k%p == 0){
            //     bool fl = false;
            //     while(!fl){
            //         fl = true;
            //     for(int i = 3; i*i <= p;i+=2){
            //         if(p%i == 0) {
            //             fl = false;
            //             break;
            //         }
            //     }
            //     if(!fl) p += 2;
            //     }
            // }
            ll inv = power(k%p,p-2,p);
            fr(i,n){
                a[i] += (((p - a[i]%p)%p)*inv)%p;
            }
            fr(i,n){
                cout<<a[i]<<" ";
            }
            cout<<endl;


        }
        

        
    }
    return 0;
}