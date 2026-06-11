#include <bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define fr(i,n) for(int i = 0;i < n;i++)
#define ll long long
int N = 10e7;
#define all(a) a.begin(),a.end()



int main(){
    int t = 1;
    cin>>t;
    while(t--){
        ll n,p;
        cin>>n>>p;
        vector<pair<int,int>> a(n);
        fr(i,n)cin>>a[i].second;
        fr(i,n)cin>>a[i].first;
        sr(a);
        ll ans = p;
        ll left = n - 1;
        for(int i =  0; i< n;i++){
            if(a[i].first < p){
                if(a[i].second <= left){
                    ans += a[i].second * a[i].first;
                    left -= a[i].second;
                } else {
                    ans += left * a[i].first;
                    left = 0;
                }
            }
        }        
        if(left != 0){
            ans += p*left;
        }
        cout<<ans<<endl; 
    }
    return 0;
}