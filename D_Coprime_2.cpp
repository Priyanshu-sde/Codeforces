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
map<int,int> cpf(int n){    
    map<int,int> ans;
    while(n > 1){
        ans[spf[n]]++;
        n /= spf[n];
    }
    return ans;
}


ll gcd(ll a, ll b){
    return b ? gcd(b,a%b) : a;
}

ll lcm(ll a,ll b){
    return (a*b)/gcd(a,b);
}

int main(){
    ll n,m;
    cin>>n>>m;
    ll a[n];
    fr(i,n) {
        cin>>a[i];
        pf(a[i]);
    } 


    vector<ll> rans;

    for(int i= 1; i<= m;i++){
        auto pfi = cpf(i);
        rans.push_back(i);
        for(auto it: pfi){
            if(ans[it.first]){
                rans.pop_back();
            }
        }
    }
    
    cout<<rans.size()<<endl;
    for(int i = 0;i < rans.size();i++){
        cout<<rans[i]<<endl;
    }
    return 0;
}