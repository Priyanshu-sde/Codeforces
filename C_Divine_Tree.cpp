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
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        if((n*(n+1))/2 < m || m < n)cout<<-1<<endl;
        else{
            vector<bool> mp(n+1,true);
            vector<ll> ans(n);
            bool fl = false;
            ll ind = 2;
            ll indb = n;
            for(int i = 0;i < n;i++){
                if(fl){
                    while(!mp[ind]){
                        ind++;
                    }
                    ans[i] = ind;
                    ind++;                    
                }
                else if(m==n-i) {
                    ans[i] = 1;
                    mp[1] = false;
                    fl = true;
                }
                else{
                    ans[i] = min(m-(n-i-1),indb);
                    mp[ans[i]] = false;
                    m -= ans[i];
                    indb--;
                }
            }
            cout<<ans[0]<<endl;
            for(int i = 0;i < n -1;i++){
                cout<<ans[i]<<" "<<ans[i+1]<<endl;
            }
        }
    }
    return 0;
}