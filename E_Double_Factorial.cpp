#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
#define all(a) a.begin(),a.end()

int main(){
    ll n;
    cin>>n;
    if(n&1) cout<<0<<endl;
    else{
    long long ans = 0;
    n /= 2;
    while(n > 0){
        n /= 5;
        ans += n;
    }
    cout<<ans<<endl;
}
    return 0;
}