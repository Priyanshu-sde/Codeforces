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
        vector<ll> a(n);
        vector<ll> b(n+1);
        fr(i,n){
            cin>>a[i];
        }
        fr(i,n+1){
            cin>>b[i];
        }
        ll ans = 0;
        ll md = LLONG_MAX;
        int id;
        fr(i,n){
            ans += abs(a[i]-b[i]);
            
            if(md > abs(b[i]-b[n])){
                md = abs(b[i]-b[n]);
                id = i;
            }
        }
        if(n==1)
        cout<<abs(a[0]-b[1])+abs(b[1]-b[0])<<endl;
        else if((a[id] >= b[n] && b[id] <= b[n]) || (a[id] <= b[n] && b[id] >= b[n]))
        cout<<ans+1<<endl;
        else{
            ll ad = 0;
            if((a[id]-b[n]) < b[n]-b[id]){
                ad = abs(a[id]-b[n]);
            }
            else{
                ad=abs(b[n]-b[id]);
            }
            cout<<ans+1+ad<<endl;

        }
        

    }
    return 0;
}