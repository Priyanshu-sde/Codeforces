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
    int t = 1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> a(n);
        ll cnt0 = 0, cnt1 = 0;
        fr(i,n) {
            cin>>a[i];
            if(a[i] == 0) cnt0++;
            else if(a[i] == 1) cnt1++;
        }
        cout<<(ll)(cnt1*(ll)pow(2,cnt0))<<endl;
    
        
    }
    return 0;
}