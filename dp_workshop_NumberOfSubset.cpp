#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()


int a[101];

int n,t;

int rec(int state,int t_left){
    if(t_left == 0) return 1;
    if(state == n) return 0;
    if(t_left < 0) return 0;

    int take = 0,not_take = 0;
    take = rec(state+1,t_left-a[state]);
    not_take = rec(state+1,t_left);
    return take+not_take;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>t;
    fr(i,n)cin>>a[i];
    cout<<rec(0,t)<<endl;
    return 0;
}