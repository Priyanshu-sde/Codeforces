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
        ll h,n;
        cin>>h>>n;
        vector<int> a(n);
        vector<int> b(n);
        vector<ll> c(n);
        fr(i,n){
            cin>>a[i];
        }
        fr(i,n){
            cin>>b[i];
        }
        fr(i,n){
            c[i]=0;
        }
        ll t = 0;
        while(h>0){
            ll total = 0;
        fr(i,n){
            if(c[i] <= t){
                total += a[i];
                c[i] = t + b[i];
            }
        }
        if(total == 0){
            t = *min_element(c.begin(),c.end()) - 1;
        }
        h -= total;
        ++t;
        }
        cout<<t<<endl;
        


    }
    return 0;
}