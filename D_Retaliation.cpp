#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n];
        fr(i,n) cin>>a[i];
        int diff = a[0] - a[1];
        bool fl = true;
        for(int i = 2;i < n;i++){
            if(a[i-1] - a[i] != diff){
                fl = false;
            }
        }
        ll x;
        if((a[0] - n*a[n-1])%(1-(ll)pow(n,2)) == 0 && fl) x = (a[0] - n*a[n-1])/(1-pow(n,2));
        else{
            cout<<"NO\n";
            continue;
        }
        ll y = a[n-1] - n*x;
        if(a[0] == x + y*n && a[n-1] == y + n*x && x >= 0 && y >= 0) cout<<"YES\n";
        else cout<<"NO\n";

        
    }
    return 0;
}