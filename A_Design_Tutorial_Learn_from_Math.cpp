#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

vector<bool> isprime(N,true);

void getprime(){
    isprime[0] = isprime[1] = isprime[2] = true;
    for(int i = 2;i*i < N;i++){
        if(isprime[i]){
            for(int j = i*i;j < N; j+=i){
                isprime[j] = false;
            }
        }
    }
}

int main(){
    getprime();
    int n;
    cin>>n;
    if(n&1){
        int k = 4;
        while(isprime[n-k] || isprime[k]){
            k++;
        }
        cout<<n-k<<" "<<k<<endl;;
    }
    else{
        cout<<n-4<<" "<<4<<endl;
    }
    return 0;
}