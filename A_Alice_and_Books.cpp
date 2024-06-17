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
        int n;
        cin>>n;
        vector<ll> ar(n);
        ll m =0;
        fr(i,n){
            cin>>ar[i];
            if(i != n-1){
                m = max(ar[i],m);
            }
        }
        ll ma = ar[n-1]+m;        
        
        cout<<ma<<endl;
    }
    return 0;
}