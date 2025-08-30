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
        vector<int> a(n);
        fr(i,n) cin>>a[i];
        vector<int> dp(n+1,0);
        vector<int> pos(n+1,-1);
        map<int,int> cnt;
        dp[0] = 0;
        for(int i = 0 ;i < n;i++){
            dp[i+1] = dp[i];
            if(pos[a[i]] == -1) pos[a[i]] = i;
            cnt[a[i]]++;
            if(cnt[a[i]] == a[i]) {
                dp[i+1] = max(dp[i],dp[pos[a[i]] + a[i]]);
                pos[a[i]] = -1;
                cnt[a[i]] = 0;
            }
        }
        cout<<dp[n]<<endl;

    }
    return 0;
}