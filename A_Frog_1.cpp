#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()


int n;
int a[100001];

int dp[100001];

int rec(int state){
    if(state == n-1) return 0;
    if(state == n-2) return abs(a[state]-a[state+1]);
    if(dp[state] != -1) return dp[state];
     dp[state] = min(abs(a[state]-a[state+1]) + rec(state+1),abs(a[state]-a[state+2])+ rec(state+2));    

    return dp[state];
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    cin>>n;
    memset(dp,-1,sizeof(dp));
    fr(i,n) cin>>a[i];
    cout<<rec(0)<<endl;
        
    return 0;
}