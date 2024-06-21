#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
#define all(a) a.begin(),a.end()
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> a(n);
        fr(i,n) cin>>a[i];
        int ans=n;
        for(int i = 1;i < n;i++){
            if(a[i-1] > a[i]){
                ans++;
            }
        }
        cout<<ans<<endl;
        cout<<a[0];
        for(int i = 1;i < n;i++){
            if(a[i-1] > a[i]){
                cout<<" "<<1;
            }
            cout<<" "<<a[i];
        }
        cout<<endl;
    }
}