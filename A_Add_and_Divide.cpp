#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int hpow(int a,int b){
    int cnt = 0;
    while(a >= b){
        b *= b;
        cnt++;
    }
    return cnt;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int mi = INT_MAX;
        while(hpow(a,b) > hpow(a,b+1) + 1){
            b++;
        }
        cout<<hpow(a,b)<<endl;

    }
    return 0;
}