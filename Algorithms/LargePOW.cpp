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

int main(){
    long long a,b;
    cin>>a>>b;
    cout<<binpow(a,b)<<endl;
}