#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 1;i <= n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll x,y,z,k;
        cin>>x>>y>>z>>k;
        ll ma =0;
        fr(i,x){
            fr(j,y){
                fr(l,z){
                    if(i*j*l == k){
                        ma = max(ma,(x-i+1)*(y-j+1)*(z-l+1));
                    }
                }
            }
        }
        cout<<ma<<endl;

    }
    return 0;
}