#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

const int MOD = 998244353;


int dp[501][2][501];
int n,k;

long long rec(vector<vector<int>> &a,int x,int y,int v){
    if(dp[x][y][v]!=-1) return dp[x][y][v];

    if(x == n - 1 && y == 1) return 1;
    long long ans = 0LL;
    if(x < n - 1 && a[x+1][y] == -1) {
        for(int i = v; i <= k;i++){
            ans = (rec(a,x+1,y,i) + ans) % MOD;
        }
    }
    if(y == 0 && a[x][y+1] == -1){
        for(int i = v; i <= k;i++){
            ans = (rec(a,x,y+1,i)  + ans ) % MOD;
        }
    }
    if(x < n - 1 && a[x+1][y] >= v){
        ans = (rec(a,x+1,y,a[x+1][y]) + ans) % MOD;        
    }
    if(y == 0 && a[x][y+1] >= v){
        ans = (rec(a,x,y+1,a[x][y+1]) + ans) % MOD;  
    }

    dp[x][y][v] = ans;

    return ans;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        memset(dp,-1,sizeof(dp));
        cin>>n>>k;
        vector<vector<int>> a(n,vector<int> (2));
        for(int i = 0; i< n;i++){
            cin>>a[i][0]>>a[i][1];
        }
        cout<<rec(a,0,0,a[0][0])<<endl;
    }
    
    return 0;
}