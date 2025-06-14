#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()
#define MOD 998244353


int main(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll st = 1,en = 1;
    for(int i = 1;i < n;i++){
        if(s[i-1] == s[i]) st++;
        else break;
    }
    for(int i = n-2;i >= 0;i--){
        if(s[i+1] == s[i]) en++;
        else break;
    }
    if(s[0] == s[n-1]){
        if(st == n){
            cout<<(n*(n+1LL)/2LL + 1)%MOD<<"\n";
        }
        else{
            cout<<(st*en + st + en + 1)%MOD<<"\n";
        }        
    }
    else{
        cout<<st+en + 1<<"\n";
    }
    return 0;
}