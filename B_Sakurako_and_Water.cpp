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
        long long  n,mi = INT_MAX;
        cin>>n;
        vector<vector<ll>> a(n, vector<ll>(n));
        fr(i,n) {
            fr(j,n){
                cin>>a[i][j];
            }
        }
        int ans = 0;
        for(int i = n-1; i >= 0;i--){
            mi = 0;
            for(int j = 0;j < n-i;j++){
                mi = min(mi,a[i+j][j]);
            }
            ans += mi;
        }
        for(int i = 1; i < n;i++){
            mi = 0;
            for(int j = 0;j < n-i;j++){
                mi = min(mi,a[j][i+j]);
            }
            ans += mi;
        }
        cout<<-ans<<endl;


        
    }
    return 0;
}