#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int main(){
    ll n,m;
    cin>>n>>m;
    ll mi = m*((n/m - 1)*(n/m))/2 + (n%m)*(n/m);
    ll ma = ((n - m)*(n - m + 1))/2;
    cout<<mi<<" "<<ma<<"\n";
    
    return 0;
}