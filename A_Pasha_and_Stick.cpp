#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int main(){
    ll n;
    cin>>n;
    if(n&1) cout<<"0\n";
    else{
        n /= 2;
        cout<<(n-1)/2<<endl;
    }
    return 0;
}