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
        int ans = 0;
        for(int i = n-2;i >= 0;i--){
            while(a[i] >= a[i+1] && a[i] != 0){
                a[i] /= 2;
                ans++;
            }
            if(a[i+1] == 0){
                cout<<-1<<endl;
                ans = -1;
                break;
            }
        }
        if(ans >= 0)cout<<ans<<endl;
    }
    return 0;
}