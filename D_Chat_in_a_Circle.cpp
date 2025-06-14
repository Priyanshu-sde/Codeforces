#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int main(){
    ll n;
    cin>>n;
    ll a[n];
    fr(i,n) cin>>a[i];
    sort(a,a+n,greater<int>());
    ll com = a[0];
    for(int i =1;i <= (n-1)/2;i++){
        com += a[i];
        if(i != (n)/2) com += a[i];
    }
    cout<<com<<endl;
    return 0;
}