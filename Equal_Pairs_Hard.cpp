#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
#define all(a) a.begin(),a.end()


ll nat(int n){
    return ((ll)n*(ll)(n+1))/(ll)2;
}
int main(){
    int t = 1;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        vector<ll> a(n,0);
        vector<ll> mp(n+1,0);
        vector<ll> mpcnt(n+1,0);
        ll ma = 1;
        ll cnt = 0;
        for(int  i = 0;i < n;i++){
            cin>>x;
            cin>>a[x-1];
            mp[a[x-1]]++;
            if(a[x-1] == ma){
                
            }
            else if(mp[a[x-1]] > mp[ma]){
                cnt -= mpcnt[a[x-1]];
                mpcnt[ma] = nat(mp[ma]-1);
                cnt += mpcnt[ma];
                ma = a[x-1];
                
            }
            else{
                if(mp[a[x-1]] > 1){
                    mpcnt[a[x-1]] += mp[a[x-1]]-1;
                    cnt+= mp[a[x-1]] - 1;
                }
                
            }
            cout<<nat(n-i-2 + mp[ma])+cnt<<" "; 
            

        }
        cout<<endl;
        
    }
    return 0;
}