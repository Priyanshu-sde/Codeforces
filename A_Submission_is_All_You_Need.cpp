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
        int cn1 = 0,cn0 = 0;
        cin>>n;
        int a[n];
        fr(i,n) cin>>a[i];
        fr(i,n){
            if(a[i] == 1) cn1++;
            else if(a[i] == 0) cn0++;
        }
        int ans = cn0;
        ans = accumulate(a,a+n,ans);
        cout<<ans<<endl;
    }
    return 0;
}