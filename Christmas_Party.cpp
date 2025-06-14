#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

const ll mod = 1000000007;

ll dearrange[1000001];

void precompute(){
    dearrange[0] = 1;
    dearrange[1] = 0;
    dearrange[2] = 1;
    for(int i = 2;i < 1000001;i++){
        dearrange[i] = ((i-1)*(dearrange[i-1] + dearrange[i-2]))%mod;
    }
}


int main(){
    precompute();
    int n;
    cin>>n;
    cout<<dearrange[n]<<endl;
    return 0;
}