#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()
#define MOD 1000000007

int spf[N];

void cal_spf(){
    spf[0] = 1;
    for(ll i = 1;i < N;i++){
        spf[i] = i;
    }
    for(ll i = 2;i < N;i++){
        if(spf[i] == i){
            for(ll j = i*i;j < N;j += i){
                if(spf[j] == j)spf[j] = i;
            }
        }
    }
}

map<int,int> ans;

void pf(int n){    
    while(n > 1){
        ans[spf[n]]++;
        n /= spf[n];
    }
}

int main(){
    cal_spf();
    int n;
    cin>>n;
    for(int i = 2;i <= n;i++) pf(i);
    ll cnt = 1;
    for(auto it: ans){
        cnt = (cnt*(it.second + 1))%MOD;
    }
    cout<<cnt<<endl;
    return 0;
}