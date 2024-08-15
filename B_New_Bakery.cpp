#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,a,b;
        cin>>n>>a>>b;
        ll v1 = 2*b-a;
        if(b <= a)
        cout<<n*a<<endl;
        else{
            ll k = b-a;
            if(k > n){
                cout<<n*(b+1)-(n*(n+1))/2<<endl;
            }
            else
            cout<<(n-k)*a + k*(b+1)-(k*(k+1))/2<<endl;
        }
    }
    return 0;
}