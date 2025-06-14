#include<iostream>
using namespace std;

long long binpow(long long a,long long b){
    long long res = 1;
    while(b > 0){
        if(b & 1)
        res *= a;
        a *= a;
        b >>=1;
    }
    return res;
}


//for mod of power calculation
ll binpow1(ll b, ll e){
    ll ans = 1;
    while(e > 0){
        if(e&1) ans = (ans*b) %  (MOD-1);
        b = (b*b)%(MOD-1);
        e >>= 1;
    }
    return ans;
}

int main(){
    long long a,b;
    cin>>a>>b;
    cout<<binpow(a,b)<<endl;
}