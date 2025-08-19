#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int dp[100001];

int rec(vector<vector<int>> adj,int i){
    if(dp[i] != 1) return dp[i];
    int res = 0;
    for(auto it : adj[i]){
        res = max(res,rec(adj,it) + 1);
    }
    return dp[i] = res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    memset(dp,sizeof(dp),-1); 
    int n,m,x,y;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    fr(i,m){
        cin>>x>>y;
        adj[x].push_back(y);
    }
    int ans = 0;
    for(int i = 1;i <= n;i++){
        ans = max(ans,rec(adj,i));
    }
    return ans;
     
    return 0;
}