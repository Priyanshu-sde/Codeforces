#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int n;
int dp[100001];


int rec(int level){

    if(level == n) {
        return 1;
    }
    int ans = 0;
    if(dp[level] != -1){
        return dp[level];
    }
    for(int step = 1;step <= 3;step++){
        if(level+step <= n){
            int ways = rec(level+step);
            ans += ways;
        }
    }
    dp[level] = ans;
    return ans;
     
}


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    cin>>n;
    memset(dp,-1,sizeof(dp));
    cout<<rec(1)<<endl;

    return 0;
}