#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
#define all(a) a.begin(),a.end()

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll mae = INT_MIN,mie = INT_MAX;
        vector<ll> a(n);
        fr(i,n){
            cin>>a[i];
            if(i != 0)mae = max(mae,a[i]);
            if(i != n-1) mie = min(mie,a[i]);
        }
        ll ma = a[n-1] - a[0];
        for(int i = 0;i < n-1;i++){
            ma = max(ma,a[i]-a[i+1]);
        }
        ma = max(ma,max(mae-a[0],a[n-1]-mie));
        cout<<ma<<endl;
    }
    return 0;
}