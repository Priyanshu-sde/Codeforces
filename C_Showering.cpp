#include<bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD = 10e7;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        ll n,s,m,l,r;
        cin>>n>>s>>m;
        ll cn = 0LL,fl = 0;
        while(n--){
            cin>>l>>r;
            if(l - cn >= s){
                fl = 1;
            }
            cn = r;
        }
        if(m-cn >= s){
             fl = 1;
        }
        if(fl == 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }

}