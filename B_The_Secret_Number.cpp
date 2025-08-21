#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

long long binpow(long long a,long long b){
    long long res = 1;
    while(b > 0){
        if(b & 1)
        res *= a;
        a *= a;
        b >>=1;
    }
    return res;
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> ans;
        for(int i = 1;i <= 18;i++){
            ll div = binpow(10,i) + 1;
            if(n%div == 0){
                ans.push_back(n/div);
            }
        }
        cout<<ans.size()<<endl;
        sort(ans.begin(),ans.end());
        for(auto it: ans){
            cout<<it<<" ";
        }
        if(ans.size() > 0)cout<<endl;

    }
    return 0;
}