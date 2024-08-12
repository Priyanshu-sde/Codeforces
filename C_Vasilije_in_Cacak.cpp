#include<bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD 10e7;

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin>>tc;
    while(tc--){
        ll n,k,x;
        cin>>n>>k>>x;
        ll a = n*(n+1)/2;
        ll b = (n-k)*(n-k+1)/2;
        if(a-b >= x && k*(k+1)/2 <= x){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO" <<endl;
        }
    }
}