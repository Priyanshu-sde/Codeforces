#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int a[n];
    fr(i,n) cin>>a[i];
    map<int,int> b;
    fr(i,n){
        b[i - a[i]]++;
    }
    long long ans = 0LL;
    fr(i,n){
        ans += b[a[i] + i];
    }
    cout<<ans<<endl;

    return 0;
}