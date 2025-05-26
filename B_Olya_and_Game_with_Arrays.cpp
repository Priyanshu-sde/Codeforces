#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
#define all(a) a.begin(),a.end()

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll gmi = LLONG_MAX,ans = 0LL;
        for(int i = 0;i < n;i++){
            ll m;
            cin>>m;
            ll a[m];
            fr(i,m) {
                cin>>a[i];
            }
            sort(a.begin(),a.end());
            ans += a[m-2];
            gmi = min(gmi,a[m-1]); 
        }
    }
    return 0;
}