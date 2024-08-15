#include<bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD = 10e7;
int main(){
    long long n,a,b;
    cin>>n>>a>>b;
    ll ans = (n/(a+b)) * a;
    if(n%(a+b) > a){
        ans += a;
    }
    else{
        ans += n%(a+b);
    }
    cout<<ans<<endl;

}