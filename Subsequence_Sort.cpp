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
        int n;
        cin>>n;
        ll a[n];
        fr(i,n) cin>>a[i];
        ll cnt = 0;
        for(int i = 1;i < n;i++){
            if(a[i-1] > a[i]){
                ll x = (a[i-1] ^ a[i]) & (~a[i]);
                cnt = max(x,cnt);
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}