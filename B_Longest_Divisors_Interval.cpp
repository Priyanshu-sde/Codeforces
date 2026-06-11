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
        if(n == 1) cout<<1<<endl;
        if(n == 2) cout<<2<<endl;
        for(int i = 1;i< n;i++){
            if(n%i != 0){
                cout<<i-1<<endl;
                break;
            }
        }
    }
}