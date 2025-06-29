#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()


int n;
int k;
int a[100001];

int dp[100001];

int rec(int state){
    if(state >= n-1) return 0;
    int res = INT_MAX;
    if(dp[state] != -1) return dp[state];
    for(int i = state + 1;i <= k + state;i++){
        if(i < n) res = min(res,abs(a[i]-a[state]) + rec(i));
        else break;
    } 
    dp[state] = res;
    return res;

}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    cin>>n>>k;
    memset(dp,-1,sizeof(dp));
    fr(i,n) cin>>a[i];
    cout<<rec(0)<<endl;
        
    return 0;
}