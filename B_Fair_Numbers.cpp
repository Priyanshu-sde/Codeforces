#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

bool check(ll n){
    ll m = n;
    while (m > 0)
    {
       if(m%10 != 0){
        if(n%(m%10) != 0) return false;
       } 
       m /= 10;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        while(!check(n)){
            n++;
        }
        cout<<n<<endl;
    }
    return 0;
}