#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
#define all(a) a.begin(),a.end()

int main(){
    ll n;
    cin>>n;
    if(n == 0) cout<<1<<endl;
    else if(n%4 == 0) cout<<6<<endl;
    else if(n%4 == 1) cout<<8<<endl;
    else if(n%4 == 2) cout<<4<<endl;
    else if(n%4 == 3) cout<<2<<endl;
    return 0;
}