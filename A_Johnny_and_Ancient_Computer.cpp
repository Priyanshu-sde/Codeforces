#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

bool ispower2(ll n){
    return (n&(n-1)) == 0;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(a < b) swap(a,b);
        if(a%b == 0 && ispower2(a/b)){
            ll r = a/b;
            int ops = 0;
            while(r%8  == 0) {
                r /= 8;
                ops++;
            }
            while(r%4 == 0){
                r /= 4;
                ops++;
            }
            while(r%2 == 0){
                r /= 2;
                ops++;
            }
            cout<<ops<<endl;         
        }
        else {
            cout<<-1<<endl;
        }
    }
    return 0;
}