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
    int t = 1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> a(n);
        fr(i,n) cin>>a[i];
        sr(a);
        bool fl = false;
        for(int  i = 0;i < n- 1;i++){
            if(a[i] == a[i+1]){
                fl = true;
                break;
            }
        }
        cout << (fl ? "YES" : "NO") << '\n';
    }
    return 0;
}