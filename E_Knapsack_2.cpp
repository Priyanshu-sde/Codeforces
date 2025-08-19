#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()
vector<pair<int,int>> a(101);
int n;

vector<vector<int>> dp[101][1001];

ll rec(int n,int val){
    
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int w;
    cin>>n>>w;
    fr(i,n){
        cin>>a[i].first>>a[i].second;
    }
    cout<<rec(0,w)<<endl;

    return 0;
}