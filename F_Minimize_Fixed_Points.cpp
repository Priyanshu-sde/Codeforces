#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int dp[100001];

int bigpf(int n){

    if(dp[n] != -1){
        return dp[n];
    }
    int d = 2;
    int big = 1;
    while(n > 1){
        if(n%d == 0){
            n /= d;
            big = d;
            return max(d,bigpf(n));
        }
        d++;
        if(d*d > n){
            if(n > 1) big = max(big,n);
            break;
        }
    }
    dp[n] = big;
    return big;
}

int main(){
    ios_base::sync_with_stdio(0);;
    cin.tie(0);
    cout.tie(0);
    memset(dp,-1,sizeof(dp));
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        // for(int i =1;i <= n;i++){
        //     cout<<bigpf(i)<<endl;
        // }
        vector<queue<int>> a(n+1);
        for(int i = 1; i <= n;i++){
            a[bigpf(i)].push(i);

        }
        int ans[n+1];
        for(auto &it: a){
            if(!it.empty()){
                int fr = it.front();
                it.pop();
                it.push(fr);
            }
        }
        for(int i = 1; i <= n;i++){
            ans[i] = a[bigpf(i)].front();
            a[bigpf(i)].pop();
        }
        for(int i = 1;i <=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}