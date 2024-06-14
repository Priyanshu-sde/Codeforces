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
        ll a,m = 0,cnt = 0,sum= 0;
        fr(i,n){
            cin>>a;
            m = max(m,a);
            sum += a; 
            if(m == sum-m)
            cnt++;     
            
        }
        cout<<cnt<<endl;
    }
    return 0;
}