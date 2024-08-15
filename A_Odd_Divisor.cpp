#include<bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD 10e7;

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin>>tc;
    while(tc--){
        ll n;
        cin>>n;
        ll ans = 0,div;
        while(1){
            if(n%2 == 0)
            n /= 2;
            else
            break;
        }
        if(n == 1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}