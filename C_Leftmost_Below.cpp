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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n];
        fr(i,n) cin>>a[i];
        ll b[n];
        ll mi = LLONG_MAX;
        for(int i =0;i < n;i++){
            mi = min(mi,a[i]);
            b[i] = mi;
        }
        int fl = true;
        for(int i = 1;i < n;i++){
            if(a[i] > 2*b[i]-1) {
                fl = false;
                break;
            }
        }
        cout<<(fl ? "YES" : "NO")<<endl;
    }
    return 0;
}