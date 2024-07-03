#include<bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD = 10e7;
int main(){
    int a,b,sa = 0,sb= 0;
    cin>>a>>b;
    for(int i = 0;i < 3;i++){
        sa += a%10;
        a /= 10;
    }
    for(int i = 0;i < 3;i++){
        sb += b%10;
        b /= 10;
    }
    cout<<max(sa,sb)<<endl;
}