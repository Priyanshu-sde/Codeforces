#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()
int n;

ll dp[100001][3];
vector<array<int,3>> a(100001);

ll rec(int state, int prev){
    
    int i = 0;
    ll res = 0;
    if(state < 0) return 0;
    if(prev != -1 && dp[state][prev] != -1) return dp[state][prev];
    while(i < 3){
        if(i != prev){
            res = max(a[state][i]+rec(state-1,i),res);
            
        }
        i++;
    }
    dp[state][prev] = res;
    return res;

}


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
memset(dp,-1,sizeof(dp));
    cin>>n;
    fr(i,n){
        cin>>a[i][0]>>a[i][1]>>a[i][2];
    }
    cout<<rec(n-1,-1)<<endl;
    return 0;
}