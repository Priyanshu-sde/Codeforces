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
        int n,s;
        cin>>n>>s;
        ll a[n];
        fr(i,n) cin>>a[i];
        int mi = *min_element(a,a+n);
        int ma = *max_element(a,a+n);
        int dub = min(abs(s-mi),abs(s-ma));
        if(s <= mi || s >= ma) cout<<  max(abs(s-mi),abs(s-ma))<<endl;
        else cout<<dub*2 + max(abs(s-mi),abs(s-ma))<<endl;
    }
    return 0;
}